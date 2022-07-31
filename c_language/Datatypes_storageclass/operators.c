#include<stdio.h>
int main()
{
printf("Arithmetic Operators:\n");
printf("--------------------------\n");
int a,b;
printf("Enter two integer values:");
scanf("%d %d",&a,&b);
printf("+ operator =%d\n",a+b);
printf("- operator =%d\n",a-b);
printf("* operator =%d\n",a*b);
printf("/ operator =%d\n",a/b);
printf("%% operator =%d\n",a%b);

printf("\nRelational Operators:\n");
printf("--------------------------\n");
float a1,b1;
printf("Enter two float values:");
scanf("%f %f",&a1,&b1);
if(a1>b1)
	printf("a1>b1\n");
if(a1<b1)
	printf("a1<b1\n");
if(a1==b1)
	printf("a1==b1\n");
if(a1!=b1)
	printf("a1!=b1\n");
if(a1<=b1)
	printf("a1<=b1\n");

printf("\nLogical Operators:\n");
printf("--------------------------\n");
a=3,b=7;
printf("a=%d b=%d\n",a,b);
if(a && b)
	printf("a && b\n");
if(a || b)
	printf("a || b\n");
if(!a)
	printf("!a\n");

printf("\nAssignment Operators:\n");
printf("--------------------------\n");
a=7,b=4;
printf("a=%d b=%d\n",a,b);
printf("a=b  =%d\n",(a=b));
printf("a+=b =%d\n",(a+=b));
printf("a-=b =%d\n",(a-=b));
printf("a*=b =%d\n",(a*=b));
printf("a/=b =%d\n",(a/=b));
printf("a%%=b =%d\n",(a%=b));
printf("a<<=b =%d\n",(a<<=b));
printf("a>>=b =%d\n",(a>>=b));
printf("a&=b =%d\n",(a&=b));
printf("a|=b =%d\n",(a|=b));
printf("a^=b =%d\n",(a^=b));

printf("\nIncrement Operators:\n");
printf("--------------------------\n");
char ch;
printf("Enter a character:");
scanf("\n%c",&ch);
printf("pre increment = %c\n",++ch);
printf("post increment = %c\n",ch++);
printf("pre decrement = %c\n",--ch);
printf("post decrement = %c\n",ch--);

printf("\nConditional Operators:\n");
printf("--------------------------\n");
long int l1,l2;
printf("\nEnter two long integer values:");
scanf("%ld %ld",&l1,&l2);
(l1>l2)?printf("l1>l2\n"):printf("l2>l1\n");

printf("\nBitwise Operators:\n");
printf("--------------------------\n");
a=2,b=4;
printf("a=%d b=%d\n",a,b);
printf("a & b = %d\n",a&b);
printf("a | b = %d\n",a|b);
printf("a ^ b = %d\n",a^b);
printf("a >> b = %d\n",a>>b);
printf("a << b = %d\n",a<<b);
printf("~a = %d\n",~a);

printf("\nSpecial Operators:\n");
printf("--------------------------\n");
printf("sizeof long double=%ld\n",sizeof(long double));
printf("comma operator =%d\n",(a=1,4,5));
return 0;
}
