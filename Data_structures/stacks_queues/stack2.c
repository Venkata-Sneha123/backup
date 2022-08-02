#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
int data;
struct node *link;
}s;

s *top=NULL;


int push(int x)
{
	s *new = malloc(sizeof(s));
	if(new == NULL)
	{
		printf("Memory is not allocated\n");
	}
	else
	{
		new->data = x;
		new->link = NULL;
		top=new;
		printf("Inserted element is : %d\n",new->data);
	}
}

int pop()
{
	s *temp;
	temp=top;
	if(top == NULL)
	{
		printf("Stack is empty\n");
	}
	else
	{
		printf("Deleted element is : %d\n",top->data);
		top=top->link;
		free(temp);
	}
}

void peek()
{
	if(top == NULL)
	{
		printf("Stack is empty\n");
	}
	printf("Topmost element is :%d\n",top->data);

}

int display()
{
	s *temp;
	temp=top;
	if(top == NULL)
	{
		printf("Stack is empty\n");
	}
	else
	{
		printf("Stack elements are: ");
		while(temp != NULL)
		{
			printf("%d ",temp->data);
			temp = temp->link;
		}
		printf("\n");
	}
}

int main()
{
push(10);
push(20);
push(30);
display();
peek();
pop();
peek();
display();
return 0;
}

