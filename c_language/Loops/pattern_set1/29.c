/*
Enter number of rows:6
1 
2 4 
3 6 9 
4 8 12 16 
5 10 15 20 25 

*/

#include<stdio.h>

int main()
{
int rows,i,j;
printf("Enter number of rows:");
scanf("%d",&rows);

int num=1;
for(i=1;i<rows;i++)
{
	for(j=1;j<=i;j++)
	{
		printf("%d ",num*j);
	}
	num++;
	printf("\n");
}
return 0;
}
