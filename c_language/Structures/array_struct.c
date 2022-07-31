/* write a program creating an array of 5 structs on heap assign n print data using fns passing pointers  */

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int a;    
}stu;


void print(stu *s,int n)
{
    int i;
    printf("The Elements in array of structure = ");
    for(i=0;i<n;i++)
    {
        printf("%d ",(s+i)->a);
    }
    printf("\n");
}

int main()
{
    	int size;
    	printf("Enter size for array of structure = ");
    	scanf("%d",&size);
    	stu *ptr;
    	ptr=(stu *)malloc(size*sizeof(stu));
	void (*fp)(stu *,int );
    	printf("Enter %d integers in array of structure: \n",size);
    	for(int i=0;i<size;i++)
       		 scanf("%d",&(ptr+i)->a);
    	fp=print;
    	fp(ptr,size);
    	return 0;
}

