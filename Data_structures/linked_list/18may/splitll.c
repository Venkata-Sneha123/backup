#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};
 struct node *start=NULL,*start1=NULL;
void create_linked_list(int m);
void display();
void split(int value);
void display1();
int main()
{
    int n,i,m,value;
    printf("enter how many nodes want:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter data :");
        scanf("%d",&m);
        create_linked_list(m);
    }
    display();
    printf("enter node after which u want to slip");
    scanf("%d",&value);
    split(value);
    display1(start);
    printf("splitting data\n");
    display1(start1);

}
void display1(struct node *start)
{
    struct node *q;
    if(start1==NULL)
    {
        printf("list is empty");
        return;
    }
    q=start;
    while(q!=NULL)
    {
        printf("node data=%d\n",q->data);
        q=q->link;
    }
}
void split(int value)
{
    struct node *p=start;
    if(p==NULL)
    {
        printf("value does not exit");
        return;
    }
    p=start;
    while(p!=NULL)
    {
        if(p->data==value)
        {
            break;
        }
        p=p->link;
    }
    start1=p->link;
    p->link=NULL;

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
        printf("node data=%d\n",q->data);
        q=q->link;
    }
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
