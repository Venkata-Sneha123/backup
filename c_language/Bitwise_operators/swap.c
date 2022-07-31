#include<stdio.h>
#include"swap.h"

int main()
{
int a,b;
printf("Enter a = ");
scanf("%d",&a);
printf("Enter b = ");
scanf("%d",&b);
swap_bit(&a,&b);
printf("In main function a=%d b=%d\n",a,b);
return 0;
}
