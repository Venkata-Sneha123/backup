#include<stdio.h>
#include"storage_class2.c"
void autostorage();
static int s=20;
int a=20;
extern char ch;
int main()
{
ch='S';
int a=23;
register float f=74.23;
printf("default auto a=%d\n",a);
autostorage();
printf("static value s=%d\n",s);
printf("register value f=%f\n",f);
printf("character=%c\n",ch);
return 0;
}

void autostorage()
{
	printf("in autostorage function a=%d\n",a);
}
