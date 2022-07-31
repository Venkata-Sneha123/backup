#include<stdio.h>
#include<stdlib.h>

#define SIZE 20
int main()
{
int a[SIZE];
int n,i,num,pos;
printf("Enter size of an array( 0- %d): ",SIZE);
scanf("%d",&n);

if(n>SIZE)
{
	printf("Array is full. Can't be inserted\n");
	exit(0);
}
else
{
	printf("Enter array elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);

	printf("Enter a position to be inserted: ");
	scanf("%d",&pos);
	printf("Enter value to be inserted at %d position: ",pos);
	scanf("%d",&num);

	if(pos <= 0 || pos >= n+1)
	{
		printf("Invalid position\n");
		exit(0);
	}
	else
	{
		a[n]=a[pos-1];
		a[pos-1]=num;
		n++;
	}
}
printf("The array is:\n");
for(i=0;i<n;i++)
	printf("%d ",a[i]);

printf("\n");
return 0;
}

