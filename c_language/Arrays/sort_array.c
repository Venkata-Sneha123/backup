// Write a C program to sort an int array using pointers. 
// [ increasing order / decreasing order ] 

#include<stdio.h>
#include"sort_arr.h"

int main()
{
int size;
printf("Enter size of an array: ");
scanf("%d",&size);

int i,arr[size];

printf("Enter an array :\n");
for(i=0;i<size;i++)
	scanf("%d",&arr[i]);

sortarray(size,arr);

printf("After sorting an array is :\n");
for(i=0;i<size;i++)
	printf("%d ",arr[i]);
printf("\n");
return 0;
}
