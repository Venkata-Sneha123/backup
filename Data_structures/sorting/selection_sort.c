/*
WAP to implement selection sort 
*/

/*  Time Complexity: O(n2) as there are two nested loops  */

#include <stdio.h>

void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void selection_Sort(int arr[], int n)
{
	int i, j, min_idx;
	for (i = 0; i < n-1; i++)
	{
		min_idx = i;
		for (j = i+1; j < n; j++)
		if (arr[j] < arr[min_idx])
			min_idx = j;
		swap(&arr[min_idx], &arr[i]);
	}
}

int main()
{
	int size;
	printf("Enter size of an array: ");
	scanf("%d",&size);
	int i,arr[size];
	printf("Enter an array:\n");
	for(i=0;i<size;i++)
		scanf("%d",&arr[i]);

	selection_Sort(arr, size);

	printf("Sorted array: \n");
	for(i=0;i<size;i++)
		printf("%d ",arr[i]);
	printf("\n");
	return 0;
}
