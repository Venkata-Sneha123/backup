#include<stdio.h>

int main()
{
int rows,i,j,space;
printf("Enter number of rows:");
scanf("%d",&rows);
for(i=rows;i>=1;i--)
{
for(space=1;space<=(rows-i);space++)
	printf(" ");
for(j=1;j<=i;j++)
	printf("* ");
printf("\n");
}
return 0;
}
