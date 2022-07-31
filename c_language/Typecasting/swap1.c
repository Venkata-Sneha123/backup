#include<stdio.h>

void swap(void *a,void *b,char *str)
{
	*(str *)(a)=*(str *)(a)+(*(str *)(b));
	*(str *)(b)=*(str *)(a)-(*(str *)(b));
	*(str *)(a)=*(str *)(a)-(*(str *)(b));
}
int main()
{
	int a,b;
	char arr[]="int";
	printf("Enter numbers\n");
	scanf("%d%d",&a,&b);
	printf("Before swapping a=%d b=%d\n",a,b);
	swap(&a,&b,arr);
	printf("After swapping a=%d b=%d\n",a,b);
	return 0;
}
