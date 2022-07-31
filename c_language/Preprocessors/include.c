#include<stdio.h>
#include"add.h"
int main()
{
int a,b;
printf("Enetr a and b value:");
scanf("%d %d",&a,&b);
printf("Addition of %d and %d = %d\n",a,b,add(a,b));
return 0;
}
