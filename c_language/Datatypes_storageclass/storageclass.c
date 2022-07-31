#include<stdio.h>

void show();

int main()
{
show(); // 1 1 1
show(); // 1 1 2
return 0;
}

void show()
{
auto int i=0;// it didn't preserve the prevoius value. so it again start with 0.
register int j=0; // it didn't preserve the prevoius value. so it again start with 0.
static int k;// default value is 0 , next time it is called it will preserve the prevoius value(k=1)
i++;
j++;
k++;
printf("\n%d %d %d\n",i,j,k);
}

/* 
Output:

1 1 1

1 1 2
*/
