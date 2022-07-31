#include <stdio.h>
#define SIZE 100 
int max(int a[], int i, int l);
int min(int a[], int i, int l);

int main()
{
int arr[SIZE],n,max1,min1;
int i;
printf("Enter size of the array: ");
scanf("%d", &n);

printf("Enter %d elements in array: ", n);
for(i=0; i<n; i++)
{
    scanf("%d", &arr[i]);
}

max1 = max(arr, 0, n);
min1 = min(arr, 0, n);
printf("Minimum element in array = %d\n", min1);
printf("Maximum element in array = %d\n", max1);
return 0;
}

int max(int a[], int i, int l)
{
int max1;
if(i >= l-2)
{
	if(a[i] > a[i + 1])
        	return a[i];
        else
           	return a[i + 1];
}
max1 = max(a, i + 1, l);
if(a[i] > max1)
	return a[i];
else
        return max1;
}

int min(int a[], int i, int l)
{
int min1;
if(i >= l-2)
{
      if(a[i] < a[i+ 1])
                return a[i];
      else
                return a[i + 1];
}
min1 = min(a, i + 1, l);
if(a[i] < min1)
        return a[i];
else
        return min1;
}
