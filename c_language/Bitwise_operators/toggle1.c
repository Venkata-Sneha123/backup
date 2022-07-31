#include<stdio.h>
#include"toggle1.h"

int main()
{
int n,p;
printf("Enter a number: ");
scanf("%d",&n);
printf("Enter a position: ");
scanf("%d",&p);
toggle_bit(n,p);
return 0;
}
