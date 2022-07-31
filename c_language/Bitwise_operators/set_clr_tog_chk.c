#include<stdio.h>
#define SET_BIT(n,p) (n | 0x01 << p)
#define CLEAR_BIT(n,p) (n&~(0x01<<p))
#define TOGGLE_BIT(n,p) (n^0x01<<p)
#define CHECK_BIT(n,p) (n&0x01<<p)

int main()
{
int n,p;
printf("Enter a number: ");
scanf("%d",&n);
printf("Enter a position: ");
scanf("%d",&p);

printf("Set of %d at %d    = %d\n",n,p,SET_BIT(n,p));
printf("Clear of %d at %d  = %d\n",n,p,CLEAR_BIT(n,p));
printf("Toggle of %d at %d = %d\n",n,p,TOGGLE_BIT(n,p));

CHECK_BIT(n,p)?printf("%d at %d = ON\n",n,p):printf("%d at %d = OFF\n",n,p);
return 0;
}

