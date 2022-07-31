#include<stdio.h>
int main()
{
int const *p=5;
printf("%d\n",++(*p));
return 0;
}

/*
compilation Error

obj1.c: In function ‘main’:
obj1.c:4:14: warning: initialization makes pointer from integer without a cast [-Wint-conversion]
 int const *p=5;
              ^
obj1.c:5:15: error: increment of read-only location ‘*p’
 printf("%d\n",++(*p));
*/
