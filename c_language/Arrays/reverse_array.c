// Iterative C program to reverse an array
#include<stdio.h>
#define N 20


void reverse_arr(int arr[], int start, int end)
{
  int temp;
  while (start < end)
  {
    temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
  }
}  


void print_arr(int arr[], int size)
{
int i;
for (i=0; i < size; i++)
  printf("%d ", arr[i]);

printf("\n");
}


int main()
{
  int arr[N],n;
  printf("Enter size of an array: ");
  scanf("%d",&n);

  printf("Enter array elements:\n");
  for(int i=0;i<n;i++)
	scanf("%d",&arr[i]);

  print_arr(arr, n);
  reverse_arr(arr, 0, n-1);
  printf("Reversed array is \n");
  print_arr(arr, n);
  return 0;
}

