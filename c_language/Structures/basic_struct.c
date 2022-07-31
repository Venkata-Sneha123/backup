#include<stdio.h>
#include<string.h>
int main()
{

struct s{
	float salary;
	char name[25];
	int age;
};
struct s b;
b.age=25;
strcpy(b.name,"Arun");
printf("%s %d\n",b.name,b.age);
return 0;
}
