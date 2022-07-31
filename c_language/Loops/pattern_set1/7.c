/*
Enter number of rows:5
The pattern is:
5 
4 5 
3 4 5 
2 3 4 5 
1 2 3 4 5 

*/

#include <stdio.h>

int main()
{
int i,j,rows;
printf("Enter number of rows:");
scanf("%d",&rows);
printf("The pattern is:\n");
for(i=rows;i>=1;i--)
{
	for(j=i;j<=rows;j++)
        {
        	printf("%d ",j);
        }
        printf("\n");
}
return 0;
}
