#include <stdio.h>

void MoveZerosToEnd(int arr[], int n)
{
	int count=0,i; 
	for (i = 0; i < n; i++)
		if (arr[i] != 0)
			arr[count++] = arr[i]; 
	while (count < n)
		arr[count++] = 0;
}

int main()
{
	int size,i;
	printf("Enter size of an array:");
	scanf("%d",&size);
	int arr[size];
	printf("Enter an array:");
	for(i=0;i<size;i++)
		scanf("%d",&arr[i]);
	int n = sizeof(arr) / sizeof(arr[0]);
	MoveZerosToEnd(arr, n);
	printf("Array after pushing all zeros to end of array:\n");
	for (int i = 0; i < n; i++)
	printf("%d ", arr[i]);
	printf("\n");
	return 0;
}

