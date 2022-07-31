void swap(int *x,int *y)
{
int temp;
temp = *x;
*x = *y;
*y = temp;
printf("After swapping (in swap function):\nx = %d, y = %d\n",*x,*y);
}
