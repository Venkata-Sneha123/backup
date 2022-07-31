#include <stdio.h>
#include"swap_arr.h"
#define MAX_SIZE 100 
int *source_ptr,*dest_ptr,*end_ptr;

int main()
{
    int source_arr[MAX_SIZE], dest_arr[MAX_SIZE];
    int size, i;
    source_ptr = source_arr;   
    dest_ptr   = dest_arr;    
    *end_ptr;

    printf("Enter size of array: ");
    scanf("%d", &size);
    printf("Enter elements in array: ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", (source_ptr + i));
    }

    end_ptr = &source_arr[size - 1];
    printf("\nSource array before copying: ");
    printArray(source_arr, size);
    printf("\nDestination array before copying: ");
    printArray(dest_arr, size);
    swap(); 
    printf("\nAfter Copying\nSource array:\n");
    printArray(source_arr,size);
    printf("\nDestination array:\n");
    printArray(dest_arr,size);
    printf("\n");
    return 0;
}
