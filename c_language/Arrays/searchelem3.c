#include<stdio.h>
#define SIZE 5
enum find{found=1,notfound};

int search(int *const,int);
int main()
{
        int arr[SIZE];
	printf("Enter a array:");
	for(int i=0;i<SIZE;i++)
		scanf("%d",&arr[i]);
        int ele;
        int (*fp)(int *const,int);
        fp=search;
        printf("enter the search element\n");
        scanf("%d",&ele);
        int i=fp(arr,ele);
        if(i==1)
        printf("element is found\n");
        else
        printf("element is not found\n");
}

int search(int *const ptr,int n)
{
        int i;
        for(i=0;i<SIZE;i++)
        {
                if(n==*(ptr+i))
                {
                        return found;
                }
        }
        if(i==SIZE)
        return notfound;
}
