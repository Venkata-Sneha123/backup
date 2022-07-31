#include <stdio.h>
#define ROW 2
#define COL 3
int main()
{
    int i,j,k;
    int a[2][ROW][COL]={ {{10,20,30},{40,50,60}},
                     {{70,80,90},{100,200,300}} };
   printf("3D-Array is :\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<ROW;j++)
        {
            for(k=0;k<COL;k++)
            {
                printf("%d ",a[i][j][k]);
            }
 		printf("\n");
        }
        printf("\n");
    }
    return 0;
}
