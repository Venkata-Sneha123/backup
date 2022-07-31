#include<stdio.h>
#define SIZE 10
int main()
{
int i,small,large;
int arr[SIZE];
int n;
printf("Enter size of an array: ");
scanf("%d",&n);

printf("Enter array elements:\n");
for(i=0;i<n;i++)
	scanf("%d",&arr[i]);

small=large=arr[0];

for(i=0;i<n;i++)
{
	if(arr[i]<small)
		small=arr[i];
	if(arr[i]>large)
		large=arr[i];
}
printf("Smallest = %d\nLargest = %d\n",small,large);
return 0;
}
