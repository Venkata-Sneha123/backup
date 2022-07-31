#include<stdio.h>

int main()
{
 volatile int a = 10;
 int a1 = 10;
printf("a = %d %d %d\n",a,++a,--a);
printf("a = %d %d %d\n",a1,++a1,--a1);
return 0;
}
