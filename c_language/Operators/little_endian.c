#include<stdio.h>

int main()
{
int a=1;
char *p=&a;
if(*p==a)
	printf("Little endian\n");
else	
	printf("Big endian\n");

return 0;
}
