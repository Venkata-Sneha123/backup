#include<stdio.h>
#define SIZE 100

int Swap_two_arr(int [],int [],int );
int main()
{
    int (*fp)(int [],int [],int);
    int a[SIZE],b[SIZE],i,n;
    int const *ptr=&n;
    printf("Enter size of two arrays: ");
    scanf("%d",&n);
    printf("Enter elements in an array1: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter elements in an array2: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    fp=Swap_two_arr;
    fp(a,b,n);
    printf("After swapping elements of array1 and array2: \n");
    printf("array1: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    printf("array2: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
    printf("\n");
    return 0;
}

int Swap_two_arr(int arr1[],int arr2[],int n)
{
    int *const p=arr1;
    int *const q=arr2;
    int i,temp;
    for(i=0;i<n;i++)
    {
        temp=*(p+i);
        *(p+i)=*(q+i);
        *(q+i)=temp;
    }
}
