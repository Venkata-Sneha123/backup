#include<stdio.h>

int main()
{

int s[][2]={{2,6},{4,8}};// This declaration work
printf("%p %d %ld \n",s,s,sizeof(s)); // it print Garbage value due to we are not giving any index 
				      // size is 16 due to we have 4 elements and int = 4bytes. size=4*4=16 bytes
return 0;
}

/*
Output:
0x7ffe98036ac0 -1744606528 16        (Address)       (G.V.)     (size)
*/
