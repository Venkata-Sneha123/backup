#include<stdio.h>

int fibanocci(int n)
{
if (n <= 1)
	return n;
return fibanocci(n-1) + fibanocci(n-2);
}

int main ()
{
int num;
printf("Enter a number:");
scanf("%d",&num);
printf("%d\n", fibanocci(num));
return 0;
}

