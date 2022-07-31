#include <stdio.h>

int main()
{
    int i,j,n=5,k,l,q;
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("*");
        }
        for(k=0;k<n-i;k++)
        {
            printf(" ");
        }
        for(q=0;q<n-i;q++)
        {
            printf(" ");
        }
        for(l=0;l<=i;l++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
