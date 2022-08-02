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



void delete_beg(S **head)
{
	S *new=*head;
	if(*head==NULL)
		return;
	else
	{
		*head=new->link;
		free(new);
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

delete_beg(&head);

printf("\n\nAfter deleting node at the beginning of sll:\n");
display(&head);
printf("\n");
return 0;
}


/*
output:
Enter size of linked list: 0

The sll is :
List is empty


After deleting node at the beginning of sll:
List is empty



output:
Enter size of linked list: 1
Enter data-1 = 5

The sll is :
5 

After deleting node at the beginning of sll:
List is empty



output:
Enter size of linked list: 4
Enter data-1 = 1
Enter data-2 = 2
Enter data-3 = 3
Enter data-4 = 4

The sll is :
1 2 3 4 

After deleting node at the beginning of sll:
2 3 4 


output:
Enter size of linked list: 2
Enter data-1 = 1
Enter data-2 = 2

The sll is :
1 2 

After deleting node at the beginning of sll:
2 

*/
