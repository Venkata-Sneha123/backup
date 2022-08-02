#include<stdio.h>
#include<stdlib.h>

typedef struct stu
{
	int data;
	struct stu *link;
}S;


void insert(S **head,int data)
{
	S *new=(S*)malloc(sizeof(S));
	if(new==NULL)
	{
		printf("Memory is not allocated\n");
		exit(0);
	}
	else
	{
		new->data=data;
		new->link=NULL;
		if(*head==NULL)
			*head=new;
		else
		{
			S *temp=*head;
			while(temp->link!=NULL)
			{
				temp=temp->link;
			}
			temp->link=new;
		}
	}
}


void display(S **head)
{
	S *temp=*head;
	if(*head==NULL)
		printf("List is empty\n");
	else
	{
		while(temp!=NULL)
		{
			printf("%d ",temp->data);
			temp=temp->link;
		}
	}
}



void insert_at_end(S **head,int new_data)
{
	S *new=malloc(sizeof(S));
	if(new==NULL)
		printf("Memory is not allocated\n");
	else
	{
		new->data=new_data;
		if(*head==NULL)
		{
			new->link=NULL;
			*head=new;
		}
		else
		{
			S *temp=*head;
			while(temp->link!=NULL)
			{
				temp=temp->link;
			}
			temp->link=new;
			new->link=NULL;
		}
		printf("Inserted successfully\n");
	}
}


int main()
{
S *head=NULL;
int data,size,i;
printf("Enter size of linked list: ");
scanf("%d",&size);

for(i=0;i<size;i++)
{
	printf("Enter data-%d = ",i+1);
	scanf("%d",&data);
	insert(&head,data);
}
printf("\nThe sll is :\n");
display(&head);

int new_data;
printf("\n\nEnter data to be inserted ");
scanf("%d",&new_data);
insert_at_end(&head,new_data);

printf("\nAfter inserting node at the end of sll:\n");
display(&head);
printf("\n");
return 0;
}


/*
output:
Enter size of linked list: 4
Enter data-1 = 1
Enter data-2 = 2
Enter data-3 = 3
Enter data-4 = 4

The sll is :
1 2 3 4 

Enter data to be inserted 6
Inserted successfully

After inserting node at the end of sll:
1 2 3 4 6 


output:
Enter size of linked list: 1
Enter data-1 = 1

The sll is :
1 

Enter data to be inserted 4
Inserted successfully

After inserting node at the end of sll:
1 4 


output:
Enter size of linked list: 0

The sll is :
List is empty


Enter data to be inserted 5
Inserted successfully

After inserting node at the end of sll:
5

*/ 
