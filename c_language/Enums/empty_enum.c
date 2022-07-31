#include<stdio.h>

struct student
{
enum week{sunday,monday,tuesday,wednesday,thursday,friday,saturday}a;
}s;

int main()
{
	printf("size=%ld\n",sizeof(s));
  return 0;
}

/*
output:
size=4
*/
