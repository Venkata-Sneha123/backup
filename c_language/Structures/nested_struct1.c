#include<stdio.h>

struct temp1
{
	char name[30];
	struct temp2
	{
		int a;
		int b;
	}var;
};

int main()
{
struct temp1 t1;

printf("Enter name and roll numer :\n");
scanf("%s %d",t1.name,&t1.var.a);
printf("Name = %s\nRoll number = %d\n",t1.name,t1.var.a);

return 0;
}
