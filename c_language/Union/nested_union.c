#include<stdio.h>
#include<string.h>

union student
{
	float i;
};

union data
{
	char name[20];
	int rollno;
	union student per;
}stu;

int main()
{

strcpy(stu.name,"Sneha");
printf("name = %s\n",stu.name);
stu.rollno = 15;
printf("Roll number = %d\n",stu.rollno);
stu.per.i = 87;
printf("percentage = %f\n",stu.per.i);
return 0;
}
