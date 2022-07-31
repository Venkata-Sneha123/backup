#include<stdio.h>

struct student
{
//int age;
enum day{sun,mon,tue,wed,thu,fri,sat};
}stu;
int main()
{
printf("size=%ld\n",sizeof(stu));
return 0;
}
