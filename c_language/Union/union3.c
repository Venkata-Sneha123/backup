#include<stdio.h>

typedef union test
{
	int x,y;
}t;


/*
union test
{
	int x,y;
}t;

in main union declaration is not required.
*/

/*
typedef union test
{
	int x,y;
}t;

we have to declare union in the main function, otherwise it will give error.
*/


/*
union test
{
	int x,y;
};

we have to declare union in the main function, otherwise it will give error.
*/

/*
typedef union 
{
	int x,y;
}test;

we have to declare union with test t;otherwise it will give error.
*/

int main()
{
t t; // it will work
t.x=2;
printf("Before: x = %d y = %d\n",t.x,t.y);

t.y=5;
printf("After making y = 5: x = %d y = %d\n",t.x,t.y);
return 0;
}
