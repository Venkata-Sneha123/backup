#include<stdio.h>
#define R 2
#define C 3

int main()
{
int a[R][C],b[R][C],c[R][C];

printf("Enter %d elements for 2-d array a[%d][%d]:\n",R*C,R,C);
for(int i=0;i<R;i++) // for rows
{
	for(int j=0;j<C;j++) // for columns
	{
		scanf("%d",&a[i][j]); // reading 2-d array elements from user
	}
}

printf("Enter %d elements for 2-d array b[%d][%d]:\n",R*C,R,C);
for(int i=0;i<R;i++) // for rows
{
	for(int j=0;j<C;j++) // for columns
	{
		scanf("%d",&b[i][j]); // reading 2-d array elements from user
	}
}


for(int i=0;i<R;i++)
{
	for(int j=0;j<C;j++)
	{
		int sum=0;
		for(int k=0;k<j;k++)
		{
			sum +=a[i][k]+b[k][j];
		}
		c[i][j]=sum;
		sum=0;
	}
}

printf("\n2-d array is:\n");
for(int i=0;i<R;i++) // for rows
{
	for(int j=0;j<C;j++) // for columns
	{
		printf("%d ",c[i][j]); // printing 2-d array elements
	}
	printf("\n");
}
return 0;
}
