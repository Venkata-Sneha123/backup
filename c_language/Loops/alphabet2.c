/*
    WAP to print the below pattern 
    AAAAA
    _BBBB
    __CCC
    ___DD
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
            printf("%c",ch);
        }
        printf("\n");
       ch++;
    }
    return 0;
}
