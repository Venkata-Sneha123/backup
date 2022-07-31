#include<stdio.h>

void add(int a,int b)
{
	printf("Addition = %d\n",a+b);
}

void sub(int a,int b)
{
	printf("Subtraction = %d\n",a-b);
}

void mul(int a,int b)
{
	printf("Multiplication = %d\n",a*b);
}

void div(int a,int b)
{
	printf("Division = %d\n",a/b);
}

void mod(int a,int b)
{
	printf("Modulus = %d\n",a%b);
}

int main()
{
int x,y,ch;
printf("Enter x and y values = ");
scanf("%d %d",&x,&y);
void (*fp[10])(int,int)={add,sub,mul,div,mod};
printf("Enter a choice : ");
scanf("%d",&ch);
(*fp[ch])(x,y);
return 0;
}


