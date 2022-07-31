#include <stdio.h>

int main()
{
int n;
printf("Enter a number: ");
scanf("%d", &n);
if(n & 1)
	printf("LSB of %d is 1\n", n);
else
        printf("LSB of %d is 0\n", n);
return 0;
}
