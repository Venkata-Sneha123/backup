#include<stdio.h>

int main()
{
int n,p;
printf("Enter a number: "); // n=2 0 0 1 0
scanf("%d",&n);
printf("Enter a position: "); // p=0 
scanf("%d",&p);
int newnum = (n|(0x01<<p));
if(!(n&0x01<<p)) // checking the bit 2 & 1<<0 = 0(output) i.e. i have to set the bit at position 0
{
	printf("Set of %d at %d  = %d\n",n,p,newnum);
	printf("Before set the bit.Number is %d\n",n);
	printf("After set the bit.Number is %d\n",newnum);
}
else
{
	printf("bit is already is set\n");
}
return 0;
}


