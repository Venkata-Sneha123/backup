#include <stdio.h>	
int main()
{
printf("Hello world\n");
printf("Line: %d\n",__LINE__);	
#line 10
printf("Line: %d\n",__LINE__);	
printf("Bye!\n");	
return 0;
}	

/* Output:
Hello world
Line: 5
Line: 10
Bye! 
*/
