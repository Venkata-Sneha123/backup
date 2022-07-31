#include<stdio.h>

struct student
{
unsigned int a:2;
unsigned int b:2;
char ch:6;
}stu;
int main()
{
printf("size=%ld\n",sizeof(stu));
}
