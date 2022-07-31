/*
Enter number of rows:5
1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5 
1 2 3 4 
1 2 3 
1 2 
1 

*/


#include <stdio.h>

int main()
{
int rows,i,j;
printf("Enter number of rows:");
scanf("%d",&rows);

for(i=1;i<=rows-1;i++)
{
        for(j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
}

for(i=rows;i>=1;i--)
{
	for(j=1;j<=i;j++)
        {
        	printf("%d ",j);
        }
        printf("\n");
}
return 0;
}
