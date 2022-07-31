#include<stdio.h>

struct stu
{
	int a;
	float b;
};

union data
{
	struct stu num;
}un;

int main()
{
un.num.a = 45;
un.num.b = 34.54;
printf("a = %d b = %f\n",un.num.a,un.num.b);
return 0;
}
