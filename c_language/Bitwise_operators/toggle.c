#include <stdio.h>
int main()
{
int num,n,n1;
printf("Enter any number: ");
scanf("%d", &num);
printf("Enter nth bit to toggle (0-31): ");
scanf("%d", &n);
n1 = num ^ (1 << n);
printf("\nNumber before toggling:\n");
printf("--------------------------\n");
printf("Decimal form = %d\tHexadecimal form = %x\n", num,num);
printf("\nNumber after toggling :\n");
printf("--------------------------\n");
printf("Decimal form = %d\tHexadecimal form = %x\n", n1,n1);
return 0;
}
