/* WAP to print alternate nodes.  */

#include<stdio.h>
#include<stdlib.h>

typedef struct stu
{
	int data;
	struct stu *next;
}S;

S *head=NULL;

void insert(int data)
{
	S *temp=NULL;
	S *new=malloc(sizeof(S));
	if(new==NULL)
		printf("Memory is not allocated\n");
	else
	{
		new->data=data;
		new->next=NULL;
		if(head==NULL)
		{
			head=new;
		}
		else
		{
			temp=head;
			while(temp->next != NULL)
			{
				temp=temp->next;
			}
			temp->next=new;
		}	
	}
}


void print_even()
{
	if(head==NULL)
		printf("list is empty\n");
	else
	{
		S *temp=head;
		while(temp != NULL && temp->next != NULL)
		{
			printf("%d ",temp->data);
			temp=temp->next->next;
		}
		printf("\n");
	}
}

int main()
{
int size,data,i;
printf("Enter size of list:");
scanf("%d",&size);
for(i=0;i<size;i++)
{
	printf("Enter data-%d:",i);
	scanf("%d",&data);
	insert(data);
}
print_even();
return 0;
}
