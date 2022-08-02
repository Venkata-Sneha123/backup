#include<stdio.h>

int main()
{
    int n;
    printf("Enter size of an array = ");
    scanf("%d",&n);
    int a[n],i,j,t;
    printf("Enter elements in an array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("Before sorting elements in an array  = ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    for(i=1;i<n;i++)
    {
        t=a[i];
        j=i-1;
        while(j>=0 && (a[j]>t))
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=t;
    }
    
    printf("After sorting elements in an array  = ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}
