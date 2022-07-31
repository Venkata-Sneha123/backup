#include<stdio.h>
#include<stdlib.h> 		

typedef struct student
{
    char name[50]; 		
    char branch[50]; 	   		
    float cgpa;	
}stu;

int count;
stu S[5];

void student_count()
{
	printf("Enter number of students :");
	scanf("%d",&count);
}

void input_data()
{
	int i;
	for(i=0;i<count;i++)
	{
		printf("Enter name - %d : ",i);
		scanf("%[^\n]s",(char*)&S[i]);
		printf("Enter branch - %d : ",i);
		scanf("%[^\n]s",(char*)&S[i]);
		printf("Enter cgpa - %d : ",i);
		scanf("%f",(char*)&S[i]);
		
	}

}

void print_data()
{
	int i;
	for(i=0;i<count;i++)
	{
		printf("Entered name = %s",(char*)(S[i]));
		printf("Entered Branch = %s",(char*)(S[i]));
		printf("Entered cgpa = %f",(char*)(S[i]));
	}

}


int main()
{
student_count();
input_data();
print_data();
return 0;	
}

