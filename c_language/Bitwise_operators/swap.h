void swap_bit(int *a,int *b)
{
*a=*a^*b;
*b=*a^*b;
*a=*a^*b;
printf("In swap function a=%d b=%d\n",*a,*b);
}
