#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};
 struct node *start=NULL;
void create_linked_list(int m);
void display();
int main()
{
    int n,i,m;
    printf("enter how many nodes want:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter data :");
        scanf("%d",&m);
        create_linked_list(m);
    }
        display();

}
void display()
{
    struct node *q;
    if(start==NULL)
    {
        printf("list is empty");
        return;
    }
    q=start;
    while(q!=NULL)
    {
       // printf("node adress=%p",q);
        printf("\nnode address=%p \tnode data=%d\n",q,q->data);
        q=q->link;
        printf("\tnext node adress address=%p",q);
    }
    printf("\n");
}
void create_linked_list(int m)
{
	struct node *temp,*q;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=m;
	temp->link=NULL;
	if(start==NULL)
	{
		start=temp;//if list empty
	}
	else
	{
		q=start;
		while(q->link!=NULL)
		{
			q=q->link;
		}
		q->link=temp;

	}
}
