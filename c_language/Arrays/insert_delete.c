#include<stdio.h>
#include<stdlib.h>
#define SIZE 50
void insert(char a[],int n)
{
	int pos,i;
	char ch;
	printf("Enter position to insert:\n");
	scanf("%d",&pos);
	printf("Enter character to be inserted at %d position: ",pos);
	scanf("\n%c",&ch);

	if(pos <= 0 || pos >= n+1)
	{
		printf("Invalid position\n");
		exit(0);
	}
	else
	{
		for(i=n-1;i>=pos-1;i--)
		{
			a[i+1]=a[i];
		}
		a[pos-1]=ch;
		n++;
	}
	
	printf("The array is:\n");
	for(i=0;i<n;i++)
	{
		printf("%c ",a[i]);
	}
}
void delete()
{
	int pos;
	printf("Enter position to delete:\n");
	scanf("%d",&pos);
}
int main()
{
	char arr[SIZE];
	int op;
	int i,size;
	printf("Enter size of an array(0-%d): ",SIZE);
	scanf("%d",&size);
	printf("Enter array elements:\n");
	for(i=0;i<size;i++)
	{
		scanf("\n%c",&arr[i]);
	}
	printf("The array is:\n");
	for(i=0;i<size;i++)
	{
		printf("%c ",arr[i]);
	}
	while(1)
	{
		printf("\nEnter Choice\n1)Insert 2)delete 3)exit\n");
		scanf("%d",&op);
		switch(op)
		{
			case 1:insert(arr,size);
				break;
			case 2:delete();
				break;
			default:exit(0);
				break;
		}
	}
}
