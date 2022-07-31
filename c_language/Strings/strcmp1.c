#include <stdio.h>  
#define SIZE 50
void str_cmp(char const*,char const*);  

int main()  
{  
char str1[SIZE];  
char str2[SIZE];
void (*fp)(char const*,char const*);  

printf("Enter str1 = ");  
scanf("%[^\n]s",str1); 

printf("Enter str2 = ");  
scanf("\n%[^\n]s",str2); 

fp=str_cmp;
fp(str1,str2); 
return 0;  
}  

void str_cmp(char const *a,char const *b)  
{  
int flag=0;  
while(*a!='\0' && *b!='\0')  // while loop  
{  
	if(*a!=*b)  
	{  
      		flag=1;  
	}  
	a++;  
	b++;  
}  
if(flag==0)  
	printf("strings equal\n");
else  
	printf("strings not equal\n");
}  
