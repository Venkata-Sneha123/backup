#include<stdio.h>
#define ROW 2
#define COL 3

int main()
{

int a[ROW][COL];
int b[ROW][COL]; 

//int c[ROW][COL];

//int c[][]; // (it will give error) array type has incomplete element type ‘int[]’
//int c[][COL]; // array size is missing
//int c[ROW][]; // error, array type has incomplete element type ‘int[]’
//int c[2][]={1,2,3,4,5,6};//(error)array type has incomplete element type ‘int[]
int c[][2]={1,2,3,4,5,6}; // it will work

printf("size of array c[][2] = %ld\n",sizeof(c));
printf("2-d array is:\n");
for(int i=0;i<2;i++) // for rows
{
	for(int j=0;j<COL;j++) // for columns
	{
		printf("%d  address of arr[%d][%d] = %p\n",c[i][j],i,j,&c[i][j]); // printing 2-d array elements
	}
}
return 0;
}

