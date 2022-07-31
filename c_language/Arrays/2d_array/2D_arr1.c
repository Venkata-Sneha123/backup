#include<stdio.h>
#define ROW 2
#define COL 3

int main()
{
int a[ROW][COL];

printf("Enter %d elements for 2-d array:\n",ROW*COL);
for(int i=0;i<ROW;i++) // for rows
{
	for(int j=0;j<COL;j++) // for columns
	{
		scanf("%d",&a[i][j]); // reading 2-d array elements from user
	}
}

printf("\n2-d array is:\n");
for(int i=0;i<2;i++) // for rows
{
	for(int j=0;j<COL;j++) // for columns
	{
		printf("%d  address of arr[%d][%d] = %p\n",a[i][j],i,j,&a[i][j]); // printing 2-d array elements
	}
}
printf("Base address of array=%p\nAddress of first element=%p\n",a,&a[0]);
return 0;
}
