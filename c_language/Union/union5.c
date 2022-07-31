#include<stdio.h>

typedef union
{
	char ch;
	int i:8;
}un;

int main()
{
un test = {'A',10};
printf("size of union = %ld\n",sizeof(test));
printf("ch = %c\ni = %d\n",test.ch,test.i);
return 0;
}
