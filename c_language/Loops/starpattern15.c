/*   
The pattern is:
        * 
      * * * 
    * * * * * 
  * * * * * * * 
* * * * * * * * * 
  * * * * * * * 
    * * * * * 
      * * * 
        * 
 */

#include<stdio.h>
int main()
{
int i,j,k,n=5;
printf("The pattern is:\n");
for(i = 1;i <= n; i++)
{
	for(k = 1;k <= n-i; k++)
        {
        	printf("  ");
        }
        for(j = 1; j <= (i*2)-1; j++)
        {
                printf("*");
                printf(" ");

        }
        printf("\n");
        }
        i=i-2;
        for(i = i;i >= 1; i--)
        {
            for(k = n-i;k >= 1; k--)
            {
                printf("  ");
            }
            for(j = (i*2)-1;j >= 1; j--)
            {
                printf("*");
                printf(" ");

            }
            printf("\n");
        }
    }

