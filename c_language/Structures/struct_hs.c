#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct student
{
char name[10];
struct student *ptr;
}stu;

int main()
{
stu s_stack,*s_heap;
s_heap = (stu *)malloc(sizeof(stu));

strcpy(s_heap->name,"sneha");
strcpy(s_stack.name,"sneha");

if(strcmp(s_heap->name,s_stack.name) == 0)
	printf("strings are equal\n");
else
	printf("strings are not equal\n");
return 0;
	
}
