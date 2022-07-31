#include<stdio.h>
#include"swap.h"

int main()
{
int x,y;
printf("Enter x = ");
scanf("%d",&x);
printf("Enter y = ");
scanf("%d",&y);
printf("Before swapping:\nx = %d, y = %d\n",x,y);
swap(&x,&y);
printf("Ater swapping (in main function):\nx = %d, y = %d\n",x,y);
return 0;
}

