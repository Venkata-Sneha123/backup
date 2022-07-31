#include<stdio.h>

int main()
{
int rows;
int i,j,space;
char ch='A';
printf("Enter number of rows:");
scanf("%d",&rows);
for(i=rows;i>=1;i--)
{
for(space=(i-rows);space<(rows-i);space++)
	printf(" ");
for(j=1;j<=i;j++)
	printf("%c ",ch);
	ch++;
printf("\n");
}
return 0;
}
