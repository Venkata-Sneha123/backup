void toggle_bit(int num,int pos)
{
printf("toggle of %d at %d = %d\n",num,pos,(num ^ 0x01 << pos));
}
