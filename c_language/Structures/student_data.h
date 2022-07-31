#include<stdio.h>
#include<stdlib.h>

#define SIZE 100

typedef struct stu
{
	char name[SIZE];
	char branch[SIZE];
	float cgpa;
	struct stu *link;	
}student;

void Input_Data(student **,student **);
void Student_Count(student **);
void Print_Data(student **);

void Input_Data(student **head,student **temp)
{
	student *new_node=(student *)malloc(sizeof(student));
	if(new_node==NULL)
	{
		printf("Memory is not Allocated\n");
	}
	else
	{
		printf("Enter the name, Branch and CGPA:\n");
		scanf("%s%s%f",new_node->name,new_node->branch,&new_node->cgpa);
		new_node->link=NULL;
		if((*head)==NULL)
		{
			(*head)=(*temp)=new_node;
		}
		else
		{
			(*temp)->link=new_node;
			(*temp)=new_node;
		}
	}
}

void Student_Count(student **head)
{
	if((*head)==NULL)
	{
		printf("Student data is empty\n");
	}
	else
	{
		student *temp=(*head);
		int count=0;
		while(temp!=NULL)
		{
			temp=temp->link;
			count++;
		}
		printf("No of Students in a list: %d\n",count);
	}
}

void Print_Data(student **head)
{
	if((*head)==NULL)
	{
		printf("Student data is empty\n");
	}
	else
	{
		student *temp=(*head);
		while(temp!=NULL)
		{
			printf("Student Name: %s\tBranch:%s\tCGPA:%f\n",temp->name,temp->branch,temp->cgpa);
			temp=temp->link;
		}
	}
}
