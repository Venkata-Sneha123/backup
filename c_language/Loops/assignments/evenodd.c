#include<stdio.h>
int main()
{
	int i,range=100;
	printf("Even numbers are:\n");
	for(i=1;i<=range;i++)
	{
		if(i%2==0)
		{
			printf("%d ",i);
		}
	}
	printf("\n");
	printf("Odd numbers are:\n");
	for(i=1;i<=range;i++)
	{
		if(i%2!=0)
		{
			printf("%d ",i);
		}
	}
	printf("\n");
	return 0;
}

                          
