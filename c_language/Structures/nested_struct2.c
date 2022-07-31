#include<stdio.h>

struct time
{
	int hr;
	int min;
	int sec;
};

struct date
{
	int day;
	int month;
	int year;
	struct time t;
};

struct student
{
	char name[30];
	struct date day;
};

int main()
{
struct student stu1;

printf("Enter name = ");
scanf("%s",stu1.name);

printf("Enter date = ");
scanf("%d %d %d",&stu1.day.day,&stu1.day.month,&stu1.day.year);

printf("Enter Time = ");
scanf("%d %d %d",&stu1.day.t.hr,&stu1.day.t.min,&stu1.day.t.sec);

printf("Name = %s\nDate = %d-%d-%d\nTime = %d-%d-%d\n",stu1.name,stu1.day.day,stu1.day.month,stu1.day.year,stu1.day.t.hr,stu1.day.t.min,stu1.day.t.sec);
return 0;
}
