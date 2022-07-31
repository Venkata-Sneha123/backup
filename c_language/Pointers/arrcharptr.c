#include<stdio.h>
#define SIZE 5

void print(char (*ptr))
{
for(int i=0;i<SIZE;i++)
	printf("%c ",*(ptr+i));
}

int main()
{
char(*Arr)[SIZE];
char c[SIZE];
printf("Enter a char array(SIZE=%d):\n",SIZE);
for(int i=0;i<SIZE;i++)
	scanf("\n%c",&c[i]);
Arr=&c;
print((*Arr)); 
printf("\n");
return 0;
}
