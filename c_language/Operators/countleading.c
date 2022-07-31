#include <stdio.h>
#define INT_SIZE sizeof(int) * 8

int main()
{
int n,c=0,msb,i;
printf("Enter a number: ");
scanf("%d", &n);
msb = 1 << (INT_SIZE - 1); // fot getting 1 at msb bit
for(i=0; i<INT_SIZE; i++)
{
	if((n << i) & msb)
        {
            break;
        }
        c++;
}
printf("Total number of leading zeros in %d is %d\n",n,c);
return 0;
}

/*
output:
Enter a number: 5
Total number of leading zeros in 5 is 29
*/
