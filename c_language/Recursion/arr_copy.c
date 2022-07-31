#include <stdio.h>
#define SIZE 100 
void print_arr(int arr[], int size);

int main()
{
    int source_arr[SIZE], dest_arr[SIZE];
    int size, i;
    int *source_ptr = source_arr;  
    int *dest_ptr   = dest_arr;     
    int *end_ptr;
    printf("Enter size of array: ");
    scanf("%d", &size);
    printf("Enter elements in array: ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", (source_ptr + i));
    }
    end_ptr = &source_arr[size - 1];
    while(source_ptr <= end_ptr)
    {
        *dest_ptr = *source_ptr;
        source_ptr++;
        dest_ptr++;
    }
    printf("After copying\nSource array = ");
    print_arr(source_arr, size);
    printf("\nDestination array = ");
    print_arr(dest_arr, size);
    printf("\n");
    return 0;
}

void print_arr(int *arr, int size)
{
int i;
for (i = 0; i < size; i++)
{
	printf("%d ", *(arr + i));
}
}
