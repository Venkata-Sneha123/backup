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



void delete_end(S **head)
{
	S *new=*head;
	if(*head==NULL)
		return;
	if((*head)->link==NULL)
	{
		free(*head);
		return;
	}
	else
	{
		while(new->link->link!=NULL)
		{
			new=new->link;
		}
		free(new->link);
		new->link=NULL;
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

delete_end(&head);

printf("\nAfter inserting node at the end of sll:\n");
display(&head);
printf("\n");
return 0;
}


/*
output:
Enter size of linked list: 5
Enter data-1 = 1
Enter data-2 = 2
Enter data-3 = 3
Enter data-4 = 45
Enter data-5 = 6

The sll is :
1 2 3 45 6 
After inserting node at the end of sll:
1 2 3 45 



output:
Enter size of linked list: 4
Enter data-1 = 1
Enter data-2 = 2
Enter data-3 = 3
Enter data-4 = 4

The sll is :
1 2 3 4 
After inserting node at the end of sll:
1 2 3 


output:
Enter size of linked list: 0

The sll is :
List is empty

After inserting node at the end of sll:
List is empty


output:
Enter size of linked list: 1
Enter data-1 = 4

The sll is :
4 
After inserting node at the end of sll:
0 1 


*/ 
