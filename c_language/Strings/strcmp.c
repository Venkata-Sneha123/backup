#include <stdio.h>  
int str_cmp(char*,char*);  

int main()  
{  
char str1[50];  
char str2[50];  
printf("Enter str1 = ");  
scanf("%[^\n]s",str1); 
printf("Enter str2 = ");  
scanf("\n%[^\n]s",str2);  
int compare=str_cmp(str1,str2); 
if(compare==0)  
	printf("strings are equal\n");  
else  
        printf("strings are not equal\n");  
return 0;  
}  

int str_cmp(char *a,char *b)  
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
	return 0;  
else  
        return 1;  
}  
