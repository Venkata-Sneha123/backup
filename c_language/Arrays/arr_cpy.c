/* 
1.Write a C program to copy all elements from an array to another array. - char / int - any one
*/

#include<stdio.h>
#define N 100
int main()
{
	int arr1[N],arr2[N],i,n;
	printf("Enter size of an array(1-100): ");
	scanf("%d",&n);
	printf("Enter an elements in an array: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr1[i]);
	}	
	for(i=0;i<n;i++)
	{
		arr2[i]=arr1[i];
	}
	printf("After Copying of elements from arr1 to arr2\nThe arr2 is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr2[i]);
	}
	printf("\n");
	return 0;
}
