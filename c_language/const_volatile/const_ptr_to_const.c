#include<stdio.h>

int main()
{
int a=4,b=5;
const int *const ptr = &a;
//*ptr=6;
printf("*p=%d\n",*ptr);
//ptr=&b;
//*ptr=9;
printf("*p=%d\n",*ptr);

return 0;
}

/*
*p=4
*p=4
*/
