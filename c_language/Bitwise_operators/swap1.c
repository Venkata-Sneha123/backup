#include<stdio.h>

void swap(int *x,int *y)
{
	*x = *x ^ *y;
	*y = *x ^ *y;
	*x = *x ^ *y;
}

int main()
{
int a,b;
printf("Enter a = ");
scanf("%d",&a);
printf("Enter b = ");
scanf("%d",&b);
swap(&a,&b);
printf("After swapping\na = %d b = %d\n",a,b);
return 0;
}
