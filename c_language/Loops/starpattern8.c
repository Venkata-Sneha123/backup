/*
Enter number of rows:5
*
**
***
****
*****
*****
 ****
  ***
   **
    *

*/

#include <stdio.h>
int main()
{
int rows,i,j,k;
printf("Enter number of rows:");	
scanf("%d",&rows);
for(i=0;i<rows;i++)
{
	for(j=0;j<=i;j++)
        {
              printf("*");
        }
        printf("\n");
}

for(i=0;i<rows;i++)
{
	for(j=0;j<i;j++)
        {
        	printf(" ");
        }
        for(k=0;k<rows-i;k++)
        {
        	printf("*");
        }
        printf("\n");
}
return 0;
}
