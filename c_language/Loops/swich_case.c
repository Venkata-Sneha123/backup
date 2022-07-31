/*
2. Switch case 
     take 2 double integers and an i/p from user :
	 if "a" , add the integers and print "sum is .." ,
	 if "s" , subtract the integers and print "diff is .." ,
	 default case : print "defaut case- noaction"
*/

#include<stdio.h>

int main()
{
	double x,y,add,sub;
	char ch;
	printf("Enter two numbers: ");
	scanf("%lf %lf",&x,&y);
	printf("a.for addition\ns.for substraction\n");
	printf("Enter above choice: ");
	scanf("\n%c",&ch);
	switch(ch)
	{
		case 'a':
			add=x+y;
			printf("Addition of two numbers: %lf\n",add);
			break;
		case 's':
     			sub=x-y;
			printf("Substraction of two numbers: %lf\n",sub);
			break;
		default:
			printf("Please enter valid input.\n");
			break;
	}
	return 0;
}
