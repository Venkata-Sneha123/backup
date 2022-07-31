/* Write a c program to print 1 - 10 numbers in reverse order using recursion method*/

#include<stdio.h>

void display(int n)
{
	if(n==0)
		return;
	printf("%d ",n);
	display(n-1);
}
int main()
{
int a=10;
printf("Reverse 1-10 elements\n");
display(a);
printf("\n");
return 0;
}

