#include<stdio.h>

int main()
{
const int a=4,b=5;
const int *ptr = &a;
//*ptr=6;
printf("*p=%d\n",*ptr);
ptr=&b;
//*ptr=9;
printf("*p=%d\n",*ptr);

return 0;
}

/*
output:
*p=4
*p=5
*/
