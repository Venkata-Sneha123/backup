/* Write a program to check whether the given number is power of 2 or not  */

#include<stdio.h>
int power(int);

int main()
{
	int num;
	printf("Enter a number = ");
	scanf("%d",&num);
	(power(num)==1)?printf("%d is a power of 2\n",num):printf("%d is not a power of 2\n",num);
    return 0;
}

int power(int n)
{
	if(n==0 || n==1)
		return 0;
	while(n!=1)
	{
		if(n%2!=0)
			return 0;
		n=n/2;
	}
	return 1;
}

/*
output:
Enter a number = 1
1 is not a power of 2

Enter a number = 2
2 is a power of 2

Enter a number = 0
0 is not a power of 2

Enter a number = 3
3 is not a power of 2

Enter a number = 4
4 is a power of 2
 
Enter a number = 5
5 is not a power of 2

Enter a number = 6
6 is not a power of 2

