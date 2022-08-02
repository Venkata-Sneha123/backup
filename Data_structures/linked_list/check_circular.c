// C program to check if the linked list is circular

#include<stdio.h>
#include<stdlib.h>


typedef struct stu
{
	int data;
	struct stu *next;
}S;



void insert(S *head,int data)
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

int is_circular(S *head)
{
	S *temp=head;
	while(temp != NULL)
	{
		if(temp->next==head)
		return 1;
		temp=temp->next;
	}
	return 0;

}


void print(S *head)
{
	if(head==NULL)
		printf("list is empty\n");
	else
	{
		S *temp=head;
		while(temp != NULL)
		{
			printf("%d ",temp->data);
			temp=temp->next;
		}
		printf("\n");
	}
}

int main()
{
int i,data,n;
S *head=NULL;
printf("Enter the size of linked list: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
	printf("Enter data-%d:",i);
	scanf("%d",&data);
	insert(head,data);
	print(head);
}
printf("\nThe data in single linked list:\n");

if (is_circular(head))
        printf("Yes\n");
    else
        printf("No\n");
    // If not circular making it circular
    head->next->next->next->next = head;
    if (is_circular(head))
        printf("After making it circular Yes\n");
    else
        printf("After making it circular No\n");

return 0;
}
