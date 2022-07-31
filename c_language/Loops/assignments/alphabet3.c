#include<stdio.h>

int main()
{
int rows;
int i,j,space;
printf("Enter number of rows:");
scanf("%d",&rows);
for(i=rows;i>=1;i--)
{
for(space=(i-rows);space<(rows-i);space++)
	printf(" ");
for(j=1;j<=i;j++)
	printf("%c ",'A'-1+i);
printf("\n");
}
return 0;
}
