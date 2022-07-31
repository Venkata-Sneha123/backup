/* 1) WAP to print the below pattern 
*****
_****
__***
___**
____*
*/

#include<stdio.h>
int main()
{
    int rows,i,j,k;
    printf("Enter number of rows: ");
    scanf("%d",&rows);
    for(i=rows;i>=1;i--)
    {
        for(k=1;k<=rows-i;k++)
        {
            printf("_");
        }
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

