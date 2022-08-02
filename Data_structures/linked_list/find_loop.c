/*Find whether the  loop is present in the given linked list or not?
 A->B->C->D->E->F->B  */

#include<stdio.h>
#include<stdlib.h>
#include<stdio_ext.h>

typedef struct node
{
    char data;
    struct node *link;
}sll;

sll *head = NULL;

void insert(char data)
{
    sll *new = (sll *)malloc(sizeof(sll));
    if(new == NULL)
    {
        printf("Memory not allocated\n");
    }
    else
    {
        new->data = data;
        new->link = NULL;
        
        if(head == NULL)
        {
            head = new;
        }
        else
        {
        sll *temp = head;
        while(temp->link != NULL)
        {
            temp = temp->link;
        }
        temp->link = new;
        }
    }
}


void display()
{
    if(head == NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        sll *temp = head;
        printf("List is : ");
        while(temp != NULL)
        {
            printf("%c ",temp->data);
            temp = temp->link;
        }
        printf("\n");
    }
}

void create_loop()
{
    sll *temp = head;
    if(head == NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        while(temp->link != NULL)
        {
            temp=temp->link;
        }
        temp->link = (head)->link;
    }
}



int detect_loop()
{
    sll *prev,*next;
    prev = head;
    next = head;
    while(prev != NULL && next != NULL && next->link != NULL )
    {
        prev = prev->link;
        next = next->link->link;
        if(prev == next)
        {
            return 1;
        }
    }
    return 0;
    
}


int main()
{
    int res;
    insert('A');
    insert('B');
    insert('C');
    insert('D');
    insert('E');
    insert('F');
    display();
    create_loop();
    res = detect_loop();
    if(res == 1)
    printf("Loop is present\n");
    else
    printf("Loop is not present\n");
}
