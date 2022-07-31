/*
    WAP to print the below pattern 
    99999
    _7777
    __555
    ___33
    ____1
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
        int k=(i*2-1);
        for(j=1;j<=i;j++)
        {
            printf("%d",k);
        }
        printf("\n");
    }
    return 0;
}
