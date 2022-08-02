#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node* link;
};

struct node* root=NULL;

int main()
{
int i,len;
printf("Enter size of list:\n ");
scanf("%d",&len);
for(i=1;i<=len;i++)
{
struct node* temp;
temp=(struct node *)malloc(sizeof(struct node));
printf("enter the data \n");
scanf("%d",&temp->data);
temp->link=NULL;
if(root==NULL)
{
	root=temp;
}
else
{
	struct node* p;
	p=root;
	while(p->link!=NULL)
	{
		p=p->link;
	}	
        p->link=temp;
}
}

printf("Elements in an linked list: \n");
for(i=1;i<=len;i++)
{
           struct node* temp;
           temp=root;
           if(temp==NULL)
	   {
		   printf("list is empty\n");
	   }
                             else
			     {
                              while(temp!=NULL)
                              {
                              printf("%d->",temp->data);
                              temp=temp->link;
			      }
			     }
			     printf("\n");
}
return 0;
}
