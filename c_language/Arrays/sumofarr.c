#include <stdio.h>
#define SIZE 100
int sum(int arr[], int start, int len);

int main()
{
int arr[SIZE];
int n,i,sumofarray;
printf("Enter size of the array: ");
scanf("%d", &n);
printf("Enter elements in the array: ");
for(i=0; i<n; i++)
{
        scanf("%d", &arr[i]);
}
sumofarray = sum(arr,0,n);
printf("Sum of array elements: %d\n", sumofarray);
return 0;
}

int sum(int arr[],int start,int len) 
{
if(start >= len)
        return 0;
return (arr[start] + sum(arr, start + 1, len));
}
