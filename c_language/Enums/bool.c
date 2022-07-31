/*#include<stdio.h>
#include<stdbool.h>

int main()
{
bool a;
a=false;
if(a)
	printf("True\n");
else	
	printf("False\n");
return 0;
}
*/


#include<stdio.h>
//#include<stdbool.h>


typedef enum 
{
false,true
}bool;

int main()
{
bool a;
a=true;
if(a)
	printf("True\n");
else	
	printf("False\n");
return 0;
}

// output : True

/*
#include<stdio.h>
//#include<stdbool.h>


enum bool
{
false,true
};

int main()
{
enum bool a;
a=false;
if(a)
	printf("True\n");
else	
	printf("False\n");
return 0;
}
*/

/*
output: False
*/
