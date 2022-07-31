#include <stdio.h>

int main()
{
int a,b;
printf("Enter a and b value:");
scanf("%d %d",&a,&b);
printf("The result of Bitwise AND = %d\n",a&b);
printf("The result of Bitwise OR = %d\n",a|b);
printf("The result of Bitwise XOR = %d\n",a^b);
printf("The result of Bitwise NOT = %d\n",~a);
printf("The result of Bitwise Left shift = %d\n",a<<b);
printf("The result of Bitwise Right shift = %d\n",a>>b);
return 0;
}
