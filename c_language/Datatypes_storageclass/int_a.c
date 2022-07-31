#include<stdio.h>

int main()
{
int a=32768;
char ch=300;
printf("%d\n",a);
printf("%d\n",ch);
return 0;
}

/*
output:
int_a.c: In function ‘main’:
int_a.c:6:9: warning: overflow in implicit constant conversion [-Woverflow]
 char ch=300;
         ^~~
km@KernelMasters:~/Thundersoft/c_language/Datatypes_storageclass$ ./a.out 
32768
44

*/
