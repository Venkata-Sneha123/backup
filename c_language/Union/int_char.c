#include<stdio.h>

union test
{
	int a;// a= 10; 0000 1010
	char ch; // ch = 'A'; 0100 0001
};

int main()
{
union test t;

t.a = 2625; // 10<<8 == 2560 = 1010 0000 0000; 2560+65=2625 == 1010 0100 0001

printf("ch = %c\n",t.ch);
printf("a = %d\n",t.a>>8); 
return 0;
}
