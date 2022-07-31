/*
  WAP to print the below pattern  
    ABCDE
    _BCDE
    __CDE
    ___DE
    ____E
*/


#include<stdio.h>
int main()
{
    int rows,i,j,k;
    char ch='A';
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
            printf("%c",ch+j-1);
        }
        printf("\n");
       ch++;
    }
    return 0;
}

