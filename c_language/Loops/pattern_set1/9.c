
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
		a++;
    		a=a*a;
		printf("%d ",a);
	}
	printf("\n");
}
return 0;
}
