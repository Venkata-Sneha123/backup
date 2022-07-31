#include <stdio.h>  
#define NUMBER 1  

int main()
{  
#if NUMBER==0  
printf("Value of Number is: %d\n",NUMBER);  
#else  
printf("Value of Number is non-zero\n");  
#endif         
return 0;
}  
