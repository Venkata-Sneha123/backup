#include <stdio.h>
#include <stdlib.h>
struct node {
	char data;
	struct node* next;
};

struct node* head = NULL;
void inserting()
{

	char data;
	struct node* new;
	new = (struct node*)malloc(sizeof(struct node));
	printf("\nEnter data to be inserted : \n");
	scanf("\n%c", &data);

	if (head == NULL) {
		new->data = data;
		new->next = new;
		head = new;
	}

	else {
		new->data = data;
		new->next = head->next;
		head->next = new;
		head = new;
	}
}

void print()
{
	if (head == NULL)
		printf("\nList is empty\n");

	else {
		struct node* temp;
		temp = head->next;
		char first;
		first=temp->data;
		do {
			printf("%c->",temp->data);
			temp = temp->next;
		} while (temp != head->next);
		printf("%c",first);
	}
	printf("\n");
}


int main()
{

	inserting();
	inserting();
	inserting();
	inserting();
	inserting();
	printf("\nThe circular linked list is:\n");
	print();
	return 0;
}
