#include<stdio.h> 
#ifndef __MATH_H  
#error First include then compile  
#else  

int main()
{  
    float a;  
    a=sqrt(7);  
    printf("%f\n",a);  
    return 0;
}  
#endif


/* Output:It will through error
error.c:3:2: error: #error First include then compile
 #error First include then compile */
