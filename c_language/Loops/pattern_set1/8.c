/*
Enter number of rows:5
The pattern is:
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 

*/

#include<stdio.h>
int main()
{
int i,j,k,rows;
printf("Enter number of rows:");
scanf("%d",&rows);
printf("The pattern is:\n");

int a=1;
for(i=1;i<=rows;i++)
{
        for(j=1;j<=i;j++)
    	{
		printf("%d ",a);
    		a++;
	}
	printf("\n");
}
return 0;
}
