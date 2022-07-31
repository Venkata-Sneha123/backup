#include<stdio.h>

void copy_string(char*, char*);

int main()
{
char str1[100], str2[100];    
printf("Enter str1 = ");    
scanf("%[^\n]s",str1);    
copy_string(str2, str1);
printf("str1 = %s\n",str1);
printf("After Copying of str1 to str2\nstr2 = %s\n", str2);    
return 0;
}

void copy_string(char *target, char *source)
{
    while(*source)
    {
        *target = *source;        
        source++;        
        target++;
    }    
    *target = '\0';
}
