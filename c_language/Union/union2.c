#include<stdio.h>
#include<string.h>
#pragma pack(1) // if we comment this size of union is 12 bytes due to structure padding

typedef union student 
{
	int a;
	char name[10];
	float f;
}stu;

int main()
{
stu var;
printf("Size of var is %ld\n",sizeof(var));
printf("Address of var is  %p\n",&var);
printf("Address of union memebers\nint = %p\nchar name[10] = %p\nfloat = %p\n",&var.a,&var.name,&var.f);
return 0;
}
