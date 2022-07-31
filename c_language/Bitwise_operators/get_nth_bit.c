#include<stdio.h>
#include"get_nth_bit.h"

int main()
{
int n,p;
printf("Enter a number: ");
scanf("%d",&n);
printf("Enter a position: ");
scanf("%d",&p);
getnth_bit(n,p);
return 0;
}
