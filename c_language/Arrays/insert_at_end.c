#include<stdio.h>
#include<stdlib.h>

#define SIZE 20
int main()
{
int a[SIZE];
int n,i,num;
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

	printf("Enter value to be inserted at position-%d: ",n+1);
	scanf("%d",&num);

		a[n]=num;
		n++;
}
printf("The array is:\n");
for(i=0;i<n;i++)
	printf("%d ",a[i]);

printf("\n");
return 0;
}

