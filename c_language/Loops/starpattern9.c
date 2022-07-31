/*
The pattern is:
    *
   **
  ***
 ****
*****
****
***
**
*

*/

#include<stdio.h>
int main()
{
int i,j,k;
printf("The pattern is:\n");
for(i=1;i<=4;i++)
{
    for(j=i;j<=4;j++)
    {
        printf(" ");
    }
    for(k=1;k<=i;k++)
    {
	printf("*");
    }
    printf("\n");
}

for(i=0;i<=5;i++)
{
    for(j=4;j>=i;j--)
    {
        printf("*");
    }
    printf("\n");
}
return 0;
}
