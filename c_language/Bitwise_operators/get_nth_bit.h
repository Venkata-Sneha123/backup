void getnth_bit(int num,int pos)
{
(num&0x01<<pos)?printf("%d at %d = 1\n",num,pos):printf("%d at %d = 0\n",num,pos);
}
