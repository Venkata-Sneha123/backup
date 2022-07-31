void set_bit(int num,int pos)
{
printf("Set of %d at %d = %d\n",num,pos,(num | 0x01 << pos));
}
