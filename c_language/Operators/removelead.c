#include<stdio.h>

int main(void)
{
int num,count=32,j=0,ones=0,zeroes=0,n;
printf("Enter a number = ");
scanf("%d",&num);
n=num;
while(!(num & 0x80000000))
{
	num = num<<1;
        count--;
}
printf("%d in Binary format = ",n);
while(j<count)
{
	if(num & 0x80000000)
               printf("1");
        else
               printf("0");
        num=num<<1;
        j++;
}
while(n)
{
   	if(n&1)
		   ones++;
	else
		   zeroes++;
	n=n>>1;
}
printf("\nNo. of ones = %d\n",ones);
printf("No. of zeroes = %d\n",zeroes);
return 0;
}
