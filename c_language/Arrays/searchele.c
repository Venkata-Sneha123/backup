#include<stdio.h>
#define SIZE 50

int main()
{
int arr[SIZE],i,size,ele,c=0;
int *const ptr=&size;

printf("Enter size of an array: ");
scanf("%d",&size);

printf("Enter elements in array: ");
for(i=0;i<size;i++)
        	scanf("%d",&arr[i]);

printf("Enter a element to be searched in an array: ");
scanf("%d",&ele);

for(i=0;i<size;i++)
{
        if((arr[i]^ele)==0)
        {
            c=1;
            break;
        }
}

if(c==1)
	printf("Element %d is found at the index postion = %d\n",ele,i); 
else
	printf("Element %d is not found\n",ele);
return 0;
}
