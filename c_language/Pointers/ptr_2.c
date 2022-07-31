#include<stdio.h>

int fun(int a)
{
a++;
return a;
}

int main()
{
int a=5;
a=fun(a);
printf("%d\n",a);
return 0;
}
