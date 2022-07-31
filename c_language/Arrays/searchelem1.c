#include<stdio.h>
#define SIZE 5
enum find{found=0,notfound};
int search(int*, int*);

int main()
{
int (*fp)(int*,int*);

int a[SIZE], search, i,r;
int *const ptr=&a[0];
int *const p=&search;

printf("Enter array element(Size =%d): ",SIZE);
for (i=0;i<SIZE;i++)
{
    scanf("%d",ptr+i);
}
printf("Enter element for search: ");
scanf("%d",p);
fp=search;
r=fp(ptr,p);
if(r=0)
	printf("element is found\n");
else	
	printf("element is not found\n");
return 0;
}

int search (int *x, int *y)
{
int i, f=0;
for (i=0;i<5;i++)
{
    if ( *(x+i) == *y)
    {
            f=1;
            break;
    }
    else
            continue;
}
if (f==1)
{
	return found;
	//enum find found;
     //printf("Element is Found\n");
}
else
	return notfound;
//     printf("Element is Not found\n");
}
