/* 
If....Else:
5.Write a c program to print all even and odd numbers btwn 1-100  
o/p : even numbers are : 2,4,6,....100
odd numbers are : 1,3,5,.....99
*/

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

