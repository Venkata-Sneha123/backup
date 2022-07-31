#include<stdio.h>

int main()
{

struct stu
{
	char name[40];
	int rollno;
	int a;
}stu1;

struct stu1
{
	char name[40];
	int rollno;
	int a;
}s1,s2,s3;

int a;
struct s4;


struct st
{
	char name[30];
	int roll;
	float marks;
}st1={"sonu",45,67.4};


struct st2; // it will not giving any error or warning without tagname
//struct st2={"chintu",23,77.4}; // it will give error without tagname
struct st st2={"chintu",23,77.4}; // it works

//st2.name="marry";

//char arr[20]={'s','o'}; // it works
char arr[20]="sneha"; // it works
printf("%s\n",arr);
return 0;
}
