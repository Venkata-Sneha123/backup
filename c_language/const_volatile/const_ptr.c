#include<stdio.h>

int main()
{
const int a=4,b=5;
int *const ptr = &a;
*ptr=6;
printf("*ptr=%d\n",*ptr);
//ptr=&b;
*ptr=9;
printf("*ptr=%d\n",*ptr);

return 0;
}

/*
const_ptr.c: In function ‘main’:
const_ptr.c:6:18: warning: initialization discards ‘const’ qualifier from pointer target type [-Wdiscarded-qualifiers]
 int *const ptr = &a;
                  ^
./a.out :
*ptr=6
*ptr=9

*/
