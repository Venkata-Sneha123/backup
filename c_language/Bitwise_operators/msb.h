#define BITS 4

void msb_bit(int num)
{
int msb;
msb = 1 << (BITS - 1);
if(num & msb)
	printf("MSB of %d is 1\n", num);
else
        printf("MSB of %d is 0\n", num);
}

