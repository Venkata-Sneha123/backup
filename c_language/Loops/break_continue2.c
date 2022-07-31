/*  b) If the user enters a negative number, it's not added to the result
  ex b : user enters  1 - add to sum , 20 , add to sum , -1 - dont add to sum - go to next iteration - print sum */

#include<stdio.h>
#define SIZE 10

int main()
{
int i,num,sum=0;
for(i=1;i<=SIZE;i++)
{
	printf("Enter a number - %d:",i);
	scanf("%d",&num);
	if(num < 0)
		continue;
	else
	{
		sum=sum+num;
	}
}
printf("sum = %d\n",sum);
return 0;
}

