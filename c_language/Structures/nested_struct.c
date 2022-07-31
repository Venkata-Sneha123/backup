#include<stdio.h>

/*
struct temp1
{
	int a;
	int b;
};
*/


typedef struct temp1
{
	int a;
	int b;
}temp1;


/*
struct temp2
{
	char name[30];
	struct temp1 var;
};
*/

typedef struct 
{
	char name[30];
	struct temp1 var;
}temp2;

int main()
{
//struct temp1 t1;
//struct temp2 t2;

temp1 t1; // it will work
temp2 t2; // it will work

printf("Enter name and roll numer :\n");
scanf("%s %d",t2.name,&t2.var.a);
printf("Name = %s\nRoll number = %d\n",t2.name,t2.var.a);

printf("Enter 2 numbers :\n");
scanf("%d %d",&t1.a,&t1.b);
printf("Entered numbers = %d %d\n",t1.a,t1.b);


return 0;
}
