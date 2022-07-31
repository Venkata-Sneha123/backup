#include<stdio.h>
#include<stdlib.h>

typedef struct student
	{
	char name[20];
	struct student *ptr;
	}stu;

int main()
{
	stu *s_heap;
	s_heap = (stu *)malloc(sizeof(stu));
}
