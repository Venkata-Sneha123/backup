/* Enter number of rows:5
1 
3 3 
5 5 5 
7 7 7 7 
9 9 9 9 9 
8 8 8 8 
6 6 6 
4 4 
2 

*/


#include <stdio.h>

int main()
{
int rows,i,j;
printf("Enter number of rows:");
scanf("%d",&rows);
int a = 1;
for(i=1;i<=rows;i++)
{
        for(j=1;j<=i;j++)
        {
            printf("%d ",a);
        }
	a+=2;
        printf("\n");
}

int b = 8;
for(i=rows-1;i>=1;i--)
{
	for(j=1;j<=i;j++)
        {
        	printf("%d ",b);
        }
	b-=2;
        printf("\n");
}
return 0;
}
