#include<stdio.h>
#define SIZE 20
int main()
{
int a[SIZE];
int n,i;
printf("Enter size of an array( 0- %d): ",SIZE);
scanf("%d",&n);

printf("Enter array elements:\n");
for(i=0;i<n;i++)
	scanf("%d",&a[i]);

printf("The array is:\n");
for(i=0;i<n;i++)
	printf("%d ",a[i]);

printf("\n");
return 0;
}

