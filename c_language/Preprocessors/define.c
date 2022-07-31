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

printf("\nOdd Numbers from 1-50:\n");
for(i = 0;i <= MAX;i++) 
{
	if(i%2!=0)
	printf("%d ",i);
}
printf("\n");
return 0;
}
