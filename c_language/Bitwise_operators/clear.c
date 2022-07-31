#include<stdio.h>

int main()
{
int n,p;
printf("Enter a number: "); // n=3 0 0 1 1
scanf("%d",&n);
printf("Enter a position: "); // p=0 
scanf("%d",&p);
int newnum = (n&~(0x01<<p));
if((n&0x01<<p)) // checking the bit 3 & 1<<0 = 1(output) false : if 3 & 1<<2 = 0(output)
{
	printf("Clear of %d at %d  = %d\n",n,p,newnum);
	printf("Before clear the bit number is %d\n",n);
	printf("After clear the bit number is %d\n",newnum);
}
else
{
	printf("bit is already is cleared\n");
}
return 0;
}


