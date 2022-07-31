/*
The pattern is :
* * * * * 
  * * * * * 
    * * * * * 
      * * * * * 
        * * * * * 
*/

#include<stdio.h>
int main()
{
int row=5,col=5;
int i,j;
printf("The pattern is :\n");
for(i=0;i<row;i++)
{
	for(j=0;j<col+(2*i);j++)
        {
        	if((2*i)>j)
        		printf(" ");
            	else 
            	{
                	printf("* ");
                }

        }
	printf("\n");
}
return 0;
}
