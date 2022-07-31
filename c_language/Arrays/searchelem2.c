#include<stdio.h>
enum check{notfound,found};
enum check search_ele(int *, int);
const int N=5;

int main()
{
	int a1[N],i,ele;
	printf("enter array elements\n");
	for(i=0;i<N;i++)
		scanf("%d",&a1[i]);

	printf("enter element to be found\n");
	scanf("%d",&ele);

	enum check (*fntn)(int *,int);
	fntn= search_ele;
	if(fntn(a1,ele))
		printf("Element is found\n");
	else
		printf("Element is not found\n");
}

enum check search_ele(int *p, int n)
{
	int i;
	for(i=0;i<N;i++)
	{
		if(*(p+i)==n)
		{
		//	printf("element found at %d position",i);
			return found;
		}
	}
	return notfound;

}
