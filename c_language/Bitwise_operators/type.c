#include<stdio.h>

void swap_bit(void *a,void *b)
{
(void*)*a=(void*)*a^(void*)*b;
(void*)*b=(void*)*a^(void*)*b;
(void*)*a=(void*)*a^(void*)*b;
}

int main()
{
int a,b;
int choice;
printf("1.int\n2.float\n3.char\n4.double\nEnter choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:
	printf("Enter a and b value:");
	scanf("%d %d",&a,&b);
	swap_bit(&a,&b);
	printf("In main function a=%d b=%d\n",a,b);
case 2:
	(float)a;
	(float)b;
	printf("Enter a and b value:");
	scanf("%d %d",&a,&b);
	swap_bit(&a,&b);
	printf("In main function a=%d b=%d\n",a,b);
	
case 3:
	(char)a;
	(char)b;
	printf("Enter a and b value:");
	scanf("%d %d",&a,&b);
	swap_bit(&a,&b);
	printf("In main function a=%d b=%d\n",a,b);
case 4:
	(double)a;
	(double)b;
	printf("Enter a and b value:");
	scanf("%d %d",&a,&b);
	swap_bit(&a,&b);
	printf("In main function a=%d b=%d\n",a,b);
default:
	printf("wrong input\n");
}
return 0;
}

