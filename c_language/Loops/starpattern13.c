#include<stdio.h>

int main()
{
int rows,i,j,k,l,p,q,r,s;
printf("Enter number of rows:");
scanf("%d",&rows);

for(i=rows;i>=1;i--)
{
	for(j=0;j<i;j++)
	{
		printf(" ");
	}
	printf("\n");


for(k=0;k<=rows-i;k++)
        {
        	printf(" ");
       	}
       	for(l=0;l<=i;l++)
	{
		printf("*");
	}
	printf("\n");

for(i=rows;i>=1;i--)
{
	for(j=0;j<i;j++)
	{
		printf("* ");
	}
	printf("\n");
}
}
return 0;
}
