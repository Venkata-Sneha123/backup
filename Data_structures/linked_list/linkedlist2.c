
#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
int data;
struct node *next;
}s;



void insert(s **head,int data)
{
	s *new=malloc(sizeof(s));
	if(new==NULL)
	{
		printf("Memory is not available\n");
	}
	else
	{
		new->data=data;
		new->next=NULL;
		if(*head==NULL)
		{
			*head=new;
		}
		else
		{
			s *temp=*head;
			while(temp->next != NULL)
			{
				temp=temp->next;
			}
			temp->next=new;
		}
	}
	new->data=data;
	new->next=NULL;
}

int countOfNodes(s **head)
{
	s *new=*head;
	int count = 0;
	while (new != NULL) {
		new = new->next;
		count++;
    }
    return count;
}


/*
 * Delete middle node of the linked list
 */
void deleteMiddleNode(s **head,int mid)
{
    int i;
    s *toDelete, *prevNode;
    s *new=*head;

    if(new == NULL)
    {
        printf("List is already empty.");
    }
    else
    {
        toDelete = new;
        prevNode = new;

        for(i=2; i<=mid; i++)
        {
            prevNode = toDelete;
            toDelete = toDelete->next;

            if(toDelete == NULL)
                break;
        }

        if(toDelete != NULL)
        {
            if(toDelete == new)
                new = new->next;

            prevNode->next = toDelete->next;
            toDelete->next = NULL;

            /* Delete nth node */
            free(toDelete);

            printf("\nSUCCESSFULLY DELETED NODE FROM MIDDLE OF LIST\n");
        }
        else
        {
            printf("Invalid position unable to delete.");
        }
    }
}


void display(s **head)
{
	s *temp=*head;
	if(*head==NULL)
	{
		printf("List is empty\n");
	}
	else
	{
		while(temp != NULL) // go till the last node, to print the data
		{
			printf("%d ",temp->data);
			temp=temp->next;
		}
		printf("\n");
	}
}


int main()
{
	int size,data,i,result,pos;
	s *head = NULL;
	printf("Enter the size of linked list: ");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("Enter the data:");
		scanf("%d",&data);
		insert(&head,data);
	}
	printf("\nLinked list is created.\nThe data is:");
	display(&head);
	result=countOfNodes(&head);
	pos=result/2;
	printf("\nThe number of nodes in linked list are = %d\n",result);
	deleteMiddleNode(&head,pos);
	printf("\nAfter deleting middle node, The single linked list is:\n");
	display(&head);
	return 0;
}

