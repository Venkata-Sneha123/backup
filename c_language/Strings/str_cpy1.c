#include<stdio.h>
#include"strcpy.h"

void copy_string(char*, char*);

int main()
{
char str1[100], str2[100];    
printf("Enter str1 = ");    
scanf("%[^\n]s",str1);    
copy_string(str2, str1);
printf("str1 = %s\n",str1);
printf("After Copying of str1 to str2\nstr2 = %s\n", str2);    
printf("Length of new string is = %d\n",str_len(str2));
return 0;
}

void str_cpy(char *dest,char *src)
{
int i;
for(i=0;*(dest+i)!='\0';i++);
for(i=0;*(src+i)!='\0';i++) 
{
        *(dest+i) = *(src+i);
}
    *(dest+i) = '\0';
printf("After copying of two strings = %s\n",dest);
}
