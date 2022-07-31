#include<stdio.h>

int main()
{

char (*p)[20];
printf("size of p =%ld\n",sizeof(p));//8
printf("size of *p =%ld\n",sizeof(*p));//20
printf("size of **p =%ld\n",sizeof(**p));//1
}
