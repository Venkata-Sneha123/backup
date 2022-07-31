#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

void display(int **p1)
{
	int i;
	for(i=0;i<SIZE;i++)
	{
		printf("%d ",*(*p1+i));
	}
	printf("\n");
}

void scan(int *p2)
{
	int i;
	printf("Enter the elements of size %d:",SIZE);
	for(i=0;i<SIZE;i++)
	{
		scanf("%d",p2+i);
	}
}

int main()
{
int *ptr=malloc(5*sizeof(int));
scan(ptr);
display(&ptr);
free(ptr);
return 0;
}
