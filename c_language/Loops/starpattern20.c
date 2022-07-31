#include<stdio.h>

int main()
{
int rows,i,j;
printf("Enter number of rows:");
scanf("%d",&rows);
char ch = 'A';
char ch1 = 'b';
for(i=1;i<=rows;i++)
{
	for(j=0;j<i;j++)
	{
		if(i%2 != 0)
		{
			printf("%c",ch);
		}
		else
		{
			printf("%c",ch1);
		}
	}
	if(i%2 != 0)
	{
		ch++;
		ch++;
	}
	else
	{
		ch1++;
		ch1++;
	}
	printf("\n");
}
return 0;
}
