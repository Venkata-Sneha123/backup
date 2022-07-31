/*
The pattern is :
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
#include<stdio.h>

int main()
{
int row=10,i,j;
printf("The pattern is :\n");
for (int i = 1; i <= row; i++)
{
	if(i <= row/2)
        {
        	for (j = 0; j < row/2-1; j++)
                {
                	printf(" ");
            	}
            	for (j = 1; j <= i ; j++)
            	{
                	printf("*");
            	}
        }
        else
        {
            for(j = 1;j<=row/2;j++)
            {
               if(j>=i-row/2)
               {
                   printf("*");
               }
               else
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}

