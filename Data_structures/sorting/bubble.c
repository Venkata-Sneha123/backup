#include<stdio.h>

void bubble_sort(int *a,int size);

int main()
{
int size;
printf("Enter a size of an array: ");
scanf("%d",&size);

int i,arr[size];
printf("Enter an array :\n");

for(i=0;i<size;i++)
	scanf("%d",&arr[i]);

bubble_sort(arr,size);
return 0;
}

void bubble_sort(int *a, int size)
{
int i,j,flag,temp;
for(i=0;i<size-1;i++)
{	
	flag=0;
	for(j=0;j<size-1-i;j++)
	{
		if(*(a+j)>*(a+j+1))
		{
			temp=*(a+j);
			*(a+j)=*(a+j+1);
			*(a+j+1)=temp;
			flag=1;
		}
	}
	if(flag == 0)
	break;
}

printf("The sorted array is : ");

for(i=0;i<size;i++)
{
	printf("%d ",*(a+i));
}
printf("\n");
}
