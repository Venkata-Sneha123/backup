/*
4.Write a C program to find maximum and minimum element in an array. 
[ use any sorting algorithm along with time complexity details ] */

#include<stdio.h>
#define SIZE 100

int main()
{
	int a[SIZE],i,j,n,max,min,temp;
	printf("Enter a range of array: ");
	scanf("%d",&n);
	printf("Enter the elements in an array: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)//i=0, i<5-1=4,
	{
		for(j=0;j<n-i-1;j++) // j=0,j<5-0-1=4,
		{
			if(a[j]>a[j+1])//a[0]>a[1], a[1]>a[2], 
			{
				temp=a[j]; // t=a[0]
				a[j]=a[j+1];//a[0]=a[1]
				a[j+1]=temp;//a[1]=t
			}
		}
	}
	printf("After sorting the array is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	printf("Maximum number = %d\nMinimum number = %d\n",a[n-1],a[0]);
	return 0;
}
