/*Break/Continue:
3. wap to calculate the sum of numbers (10 numbers max)
  a) If the user enters a negative number, the loop terminates
 ex   a: user enters 
  1 - add to sum , 20, add to sum , 0 - terminate the loop and sum  should be printed */

#include<stdio.h>
#define SIZE 10

int main()
{
int i,num,sum=0;
for(i=1;i<=SIZE;i++)
{
	printf("Enter a number - %d:",i);
	scanf("%d",&num);
	if(num <= 0)
		break;
	else
	{
		sum=sum+num;
	}
}
printf("sum = %d\n",sum);
return 0;
}

