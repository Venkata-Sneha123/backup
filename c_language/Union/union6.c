#include<stdio.h>
#include<stdlib.h>

union student
{
	int rollno;
};

int main()
{
union student *stu;
stu=(union student *)malloc(sizeof(union student));

stu->rollno = 15;

printf("Roll number = %d\n",stu->rollno);
printf("Size of union = %ld\n",sizeof(*stu));
return 0;
}
