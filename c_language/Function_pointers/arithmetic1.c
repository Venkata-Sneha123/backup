#include<stdio.h>
#define N 5
#define K 3
int * print(int *p)
{
	int i;
	for(i=0;i<N;i++)
		printf("i=%d\n",*(p+i));
	return p;
}
int * sum(int *p)
{
	int k=0,i;
	for(i=0;i<N;i++)
		k=k+(*(p+i));
	printf("sum=%d\n",k);
	return p;
}
int * mul(int *p)
{
	int k=1,i;
	for(i=0;i<N;i++)
		k=k*(*(p+i));
	printf("mul=%d\n",k);
	return p;
}
int * findno(int *p)
{
	int k=0,i;
	for(i=0;i<N;i++)
	{
		if(*(p+i)==K)
		{
			printf("found at i=%d\n",i);
			
		}
	}
	return p;
}

int * cntzero(int *p)
{
int i,*q,cnt=0;
q=&cnt;
for(i=0;i<N;i++)
{
if(*(p+i)==0);
cnt++;
}
printf("cnt of zeros=%d\n",cnt);
return q;
}

int main()
{
	int i,a[N];
	printf("enter array elements\n");
        for(i=0;i<N;i++)
		scanf("%d",&a[i]);
	int * (*p[5])(int *);
	p[0]=print;
	p[1]=sum;
	p[2]=mul;
	p[3]=findno;
	p[4]=cntzero;
for(i=0;i<N;i++)
	(p[i])(a);
}
