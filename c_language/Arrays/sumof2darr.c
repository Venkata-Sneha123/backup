#include<stdio.h>
#include"add_2darr.h"
int row,col;

int main()
{
printf("Enter rows and coloumns for matrix: ");
scanf("%d %d",&row,&col);
int a[row][col],b[row][col],c[row][col];

int i,j;
printf("Enter 1st matrix :\n");
for(i=0;i<row;i++)
{
	for(j=0;j<col;j++)
	{
		scanf("%d",&a[i][j]);
	}
}

printf("Enter 2nd matrix :\n");
for(i=0;i<row;i++)
{
	for(j=0;j<col;j++)
	{
		scanf("%d",&b[i][j]);
	}
}

printf("1st matrix is:\n");
for(i=0;i<row;i++)
{
	for(j=0;j<col;j++)
	{
		printf("%d",a[i][j]);
	}
}

printf("2nd matrix is:\n");
for(i=0;i<row;i++)
{
	for(j=0;j<col;j++)
	{
		printf("%d",b[i][j]);
	}
}

printf("The Addition of 2 matrices is:\n");
add_matrix(a[row][col],b[row][col],c[row][col]);
return 0;
}
