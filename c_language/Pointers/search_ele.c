#include<stdio.h>
void search(int *x, int *y);

int main()
{
int size;
printf("Enter size of an array:");
scanf("%d",&size);
int a[size], n, i;
int *ptr, *p;
ptr = &a[0], p = &n;
printf("Enter array element: ");
for (i=0;i<size;i++)
{
    scanf("%d",ptr+i);
}
printf("Enter element for search: ");
scanf("%d",p);
search(&a[0],p);
return 0;
}

void search (int *x, int *y)
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
     printf("Element is Found\n");
else
     printf("Element is Not found\n");
}
