/*
Enter number of rows:5
5 
4 4 
3 3 3 
2 2 2 2 
1 1 1 1 1 

*/

#include <stdio.h>

int main()
{
int i,j,rows;
printf("Enter number of rows:");
scanf("%d",&rows);
for(i=rows;i>=1;i--)
{
	for(j=rows;j>=i;j--)
        {
        	printf("%d ",i);
        }
        printf("\n");
}
return 0;
}
