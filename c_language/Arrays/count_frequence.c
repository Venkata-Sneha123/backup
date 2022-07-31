/* 3.Write a C program to count frequency of each element in an array. */

#include<stdio.h>
#define N 100
int main()
{
	int a[N],b[N],i,j,n,count=0;
	printf("Enter size of an array: ");
	scanf("%d",&n);
	printf("Enter elements in array: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);// a[]={1,1,2,3,2};
		b[i]=-1; // b[]={-1,-1,-1,-1,-1};
	}
	for(i=0;i<n;i++) //i=0,1,2,3,4
	{
		count=1;
		for(j=i+1;j<n;j++) // j=1,2,3,4, j=2,3,4, j=3,4, j=4
		{
			if(a[i]==a[j]) // a[0]==a[1],a[0]==a[2],a[0]==a[3].... , a[1]==a[2]... , a[2]==a[3],a[2]==a[4]
			{
				count++; //count=2,
				b[j]=0; // b[1]=0, b[4]=0
			}
		}
		if(b[i]!=0) // b[0]=-1(T), b[1]=0(F), b[2]=-1(T), b[3]=-1(T), b[4]=0(F)
			b[i]=count; // b[0]=2,b[1]=0,b[2]=2,b[3]=1,b[4]=0
	}
	printf("Count frequency of element in an array: \n");
	for(i=0;i<n;i++)
	{
		if(b[i]!=0) // b[0]=2(T), b[1]=0(F), b[2]=2(T), b[3]=1(T), b[4]=0(F)
			printf("frequency of %d: %d times\n",a[i],b[i]);
	}
	return 0;
}
