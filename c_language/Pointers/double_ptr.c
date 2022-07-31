#include<stdio.h>

void show1(int **,int **);

void show(int *a,int *b) // it will take address of a and b in pointers(*a & *b) 
{
	show1(&a,&b); // passing the address of this pointers(*a & *b) to show1 function
}

void show1(int **c,int **d) // it will take address of pointers(*a & *b) i.e. **c = &a, **d = &b; 
{			    //so, double pointer is used to store address of single pointer

	**c = **c + **d; // so c indirectly point to a , a = 5, so c = 5+2 => c = 7
	**d = **d + **c; // // so d indirectly point to b, b = 2, so d = 2 + 7 => d = 9
}


int main()
{
int a=5,b=2;
show(&a,&b);// passing address of a and b to show function
	    // it is call by reference, so whaterver changes in show1 fun it will effect actual parameters
printf("a = %d b = %d\n",a,b); // a = 7 b = 9
return 0; 
}

/*
output:
a = 7 b = 9
*/
