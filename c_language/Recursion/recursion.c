#include<stdio.h>

void ReverseArray(int arr[], int n)
{
    int i;
    if(n>0)
    {
        i=n-1;
        printf("%d ",arr[i]);
        ReverseArray(arr,i);
    }
return;
}

int main()
{
    int size,i;
    printf("Enter array size:");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the Array Element:");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("After reversing Array Element Are:");
    ReverseArray(arr,size);
    printf("\n");
    return 0;
}
