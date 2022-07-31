void clear_bit(int num,int pos)
{
printf("clear of %d at %d = %d\n",num,pos,(num&~(0x01<<pos)));
}
