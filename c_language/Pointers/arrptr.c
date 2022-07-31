#include<stdio.h>

print(char *p)
{
int i;
for(i=0;i<p;i++)
	printf("%c",*(p+i));
}
int main()
{
char c[]={'a','e','i','o','u'};
char *ptr[5];
ptr=&c;
print(ptr);
return 0;
}
