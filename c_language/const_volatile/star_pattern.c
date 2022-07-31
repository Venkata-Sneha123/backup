/*
Enter number of rows:5
* * * * * 
  * * * * 
    * * * 
      * * 
        * 
*/

#include<stdio.h>

int main()
{
const int rows;
int i,j,space;
printf("Enter number of rows:");
scanf("%d",&rows);
for(i=rows;i>=1;i--)
{
for(space=(i-rows);space<(rows-i);space++)
	printf(" ");
for(j=1;j<=i;j++)
	printf("* ");
printf("\n");
}
return 0;
}

