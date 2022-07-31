#include<stdio.h> 
#ifdef __MATH_H  
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
