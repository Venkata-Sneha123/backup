extern int *source_ptr,*dest_ptr,*end_ptr;
void swap()
{
	while(source_ptr <= end_ptr)
	{
        	*dest_ptr = *source_ptr;
        	source_ptr++;
        	dest_ptr++;
	}
}
void printArray(int *arr, int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d ", *(arr + i));
    }
}
