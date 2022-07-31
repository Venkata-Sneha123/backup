#include <stdio.h>
#define INT_SIZE sizeof(int) * 8

int main()
{
int n,c=0,msb;
printf("Enter a number: ");
scanf("%d", &n);
msb = 1 << (INT_SIZE - 1);
for(int i=0; i<INT_SIZE; i++)
{
	if((n<< i) & msb)
        {
               break;
        }
        c++;
}
printf("Total number of leading zeros in %d = %d\n",n,c);
return 0;
}
