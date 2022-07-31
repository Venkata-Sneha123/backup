#include<stdio.h>

int main()
{
static int var=5;
printf("%d ",var--);
if(var)
	main();
return 0;
}

/*
output:
5 4 3 2 1
*/
