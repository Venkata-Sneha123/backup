#include <stdio.h>
#define INT_SIZE sizeof(int) * 8 // converts into bits 

int main()
{
    int n,c=0,i;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i=0; i<INT_SIZE; i++)
    {
        if((n >> i ) & 1)
        {
            break;
        }
        c++;
    }
printf("Total number of trailing zeros in %d is %d\n",n,c);
return 0;
}
