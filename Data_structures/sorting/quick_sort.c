/* 
WAP to implement quick sort.
*/

#include<stdio.h>

void quicksort(int number[25],int first,int last)
{
	int i, j, k, temp;
	if(first<last)
	{
      		k=first;
      		i=first;
      		j=last;
      		while(i<j)
		{
         		while(number[i]<=number[k]&&i<last)
            		i++;
         		while(number[j]>number[k])
            		j--;
         		if(i<j)
			{
            			temp=number[i];
            			number[i]=number[j];
            			number[j]=temp;
         		}
      		}

      		temp=number[k];
      		number[k]=number[j];
      		number[j]=temp;
      		quicksort(number,first,j-1);
      		quicksort(number,j+1,last);

   	}
}

int main(){
   int i, size, number[25];

   printf("Enter size of an array: ");
   scanf("%d",&size);

   printf("Enter %d elements: ", size);
   for(i=0;i<size;i++)
      scanf("%d",&number[i]);

   quicksort(number,0,size-1);

   printf("Order of Sorted elements: ");
   for(i=0;i<size;i++)
      printf(" %d",number[i]);
   printf("\n");
   return 0;
}
