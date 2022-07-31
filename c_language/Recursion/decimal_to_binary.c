#include <stdio.h>

int convert_to_binary(int n)
{
	if (n == 0)
		return 0;
	else
		return (n % 2 + 10 * convert_to_binary(n / 2));
}

int main()
{
int num;
printf("Enter a number: ");
scanf("%d",&num);
printf("Binary form of %d = %d\n", num,convert_to_binary(num));
return 0;
}


