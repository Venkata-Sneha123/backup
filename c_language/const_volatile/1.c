#include<stdio.h>

int main()
{
int i =0;
   printf("%d %d\n",i,i++);
int x=5;
volatile int  x1=5;
   printf("%d %d %d\n",++x,++x,++x);
   printf("%d %d %d\n",++x1,++x1,++x1);
return 0;
}


/*
output:
1 0
8 8 8
8 7 6
*/
