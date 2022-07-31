#include<stdio.h>
#include<string.h>
#pragma pack(1) // if we comment this size of union is 12 bytes due to structure padding

typedef union student 
{
	int a;
	char name[10];
}stu;

int main()
{
stu var;
var.a=10;
printf("a = %d\n",var.a);

strcpy(var.name,"Sneha");
printf("Name = %s\n",var.name);

printf("Size of Union is %ld\n",sizeof(stu));
return 0;
}
