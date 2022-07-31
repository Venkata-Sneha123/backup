/* 
Write a C program to check Most Significant Bit (MSB) of a number is set or not.
*/

#include <stdio.h>
#include"msb.h"

int main()
{
int n;
printf("Enter a number: ");
scanf("%d", &n);
msb_bit(n);
return 0;
}

