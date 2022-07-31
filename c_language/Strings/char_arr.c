#include<stdio.h>

int main()
{
int i;
char x[]="\0";//it is empty char array
if(printf("%s\n",x)) //printf returns the no.of o/p's to be printed successfully on the screen and also print the newline 
	printf("Ok, here \n");
else
	printf("Forget it\n");
return 0;
}

/*
Output:

Ok, here
*/
