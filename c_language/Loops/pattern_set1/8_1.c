#include<stdio.h>
int main()
{
int i,j,k,rows;
printf("Enter number of rows:");
scanf("%d",&rows);
printf("The pattern is:\n");
for(i=1;i<=rows;i++)
{
	k = i;
        for(j=1;j<=i;j++)
    	{
        	printf("%d ", k);
      		k += rows-j;
    	}
	printf("\n");
}
return 0;
}
