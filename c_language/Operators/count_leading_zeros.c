/*
Write a c program to count leading zeros in a binary number.
Input:
Enter a number: 20
Output:
Total number of leading zeros in 20 is 27
*/

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

