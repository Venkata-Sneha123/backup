#include<stdio.h>

void fun(char* a,char* b)
{
	int i,j,k;
 	for(i=0;a[i];i++) // i=0,1,2,3,....'\0'
	{
 		for(k=0;k<i;k++) // it will k=0 to k<i -> if i=4 -> k=0,1,2,3
 		{
 			if(a[i]==a[k]) // it will checking common characters in string-1
 			break;
	 	}
 		if(i==k)
 			for(j=0;b[j];j++) // i=0 -> j=0,1,2,...'\0'; i=1 -> j=0,1,2,...'\0'
 			{
 				if((a[i]=='a')||(a[i]=='e')||(a[i]=='o')||(a[i]=='i')||(a[i]=='u'))
 				{
	 				if(a[i]==b[j]) // it will check char in str-1 with char in str-2
 					{
 						printf("%c ",a[i]);// if both char are matched, we are printing
 						break;
 					}
 				}		
 			}
 	}
}

int main()
{
 	char a[20],b[20];
 	printf("Enter string-1 and string-2 = ");
 	scanf("%s %s",a,b);
	void (*fp)(char*,char*);
 	fp=fun;
 	printf("Common vowels = ");
 	fp(a,b);
 	printf("\n");
	return 0;
}
