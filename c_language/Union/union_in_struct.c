#include<stdio.h>
#include<string.h>

union data
{
	int d;
};

struct student
{
	char name[20];
	union data rollno;
}stu;

int main()
{
strcpy(stu.name,"Sneha");
printf("Name = %s\n",stu.name);

stu.rollno.d = 20;
printf("Roll number = %d\n",stu.rollno.d);
return 0;
}
