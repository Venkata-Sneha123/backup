/* WAP to implement linear search */
#include <stdio.h>

int search_ele(int arr[], int x, int n)
{
	int i;
	for (i = 0; i < n; i++)
		if (arr[i] == x)
			return i;
	return -1;
}

int main(void)
{
	int size;
	printf("Enter a size of an array: ");
	scanf("%d",&size);
	int search,i, arr[size];
	printf("Enter an array:\n");
	for(i=0;i<size;i++)
	{
		printf("Enter element - %d = ",i);
		scanf("%d",&arr[i]);
	}
	printf("Enter element to be searched: ");
	scanf("%d",&search);
	int result = search_ele(arr,search,size);
	(result == -1)?printf("Element is not present in array\n"):printf("Element is present at index %d\n", result);
	return 0;
}
