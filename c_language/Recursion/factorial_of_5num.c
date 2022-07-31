/* Write a c program to find the factorial of first 5 numbers using recursion method  */

#include <stdio.h>

int factorial(int n)
{
	if (n == 0)
		return 1;
	return n * factorial(n - 1);
}

int main()
{
	int n;
	for(int i=0;i<5;i++)
	{
		printf("Enter a number:");
		scanf("%d",&n);
		printf("Factorial of %d = %d\n",n,factorial(n));
	}
	return 0;
}

