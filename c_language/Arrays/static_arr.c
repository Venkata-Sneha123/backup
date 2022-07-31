#include<stdio.h>

int main()
{
static int a[5]={'A','B','C','D','E'};

for(int i=0;i<5;i++) // i=0 ,i=2, i=4, i=6(false so, out of the loop)
	printf("%c %d\n",i++[a],a[i]);// i=1 but post increment we take i=0, 0[a]==a[0]= A in %c 65 in %d) 
				     // i=3 but post increment we take i=2,  2[a]==a[0]= C in %c 67 in %d)
				     // i=5 but post increment we take i=4,  4[a]==a[0]= E in %c 69 in %d)
return 0;
}

/*
Output:
A 65
C 67
E 69
*/
