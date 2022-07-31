#include <stdio.h>
#define MAX 50

int main()
{
int i;
printf("Even Numbers from 1-50:\n");
for(i = 1;i <= MAX;i++) 
{
	if(i%2==0)
	printf("%d ",i);
}
#undef MAX
printf("\nOdd Numbers from 1-50:\n");
for(i = 0;i <= MAX;i++) 
{
	if(i%2!=0)
	printf("%d ",i);
}
printf("\n");
return 0;
}
/* Output:
It will give Error, due to we are undeclared the MAX at the line number 13.
so from 14th line onwards MAX is undeclared. So it will through an Error. */
