#include<stdio.h>
#define N 2

struct student{
	char name[30];
	int roll;
	float per;
};

int main()
{
	struct student s1[N];
	int i,n;
	printf("Enter no of students:");
	scanf("%d",&n);
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("Enter name of student - %d = ",i+1);
		scanf("%s",s1[i].name);
		printf("Enter Roll number of student - %d = ",i+1);
		scanf("%d",&s1[i].roll);
		printf("Enter percentage of student  - %d = ",i+1);
		scanf("%f",&s1[i].per);
		printf("\n");
	}
	
	printf("The student data is:\n");
	for(i=0;i<n;i++)
	{
		printf("student = %d\nName = %s\nRollno = %d\nPercentage = %f\n",i+1,s1[i].name,s1[i].roll,s1[i].per);
		printf("\n");
	}
}
