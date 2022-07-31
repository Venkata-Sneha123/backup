#include<stdio.h>

const int y;

int main()
{
	const int x;
	const static int z;
	//x=5;
	//y=10;
	int *p1,*p2;
	p1=&x;
	p2=&z;

	*p1=15;
	*p2=30;
	printf("%d %d\n",x,z);
	return 0;
}

/*
output:
2.c: In function ‘main’:
2.c:12:4: warning: assignment discards ‘const’ qualifier from pointer target type [-Wdiscarded-qualifiers]
  p1=&x;
    ^
2.c:13:4: warning: assignment discards ‘const’ qualifier from pointer target type [-Wdiscarded-qualifiers]
  p2=&z;
    ^
output:
15 30

*/
