/*
Write a C program to copy one string to another string and find length of new string using pointers.
*/

/*  -----------------strcpy.h header file ----------------------*/
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

int str_len(char str[])
{
	int i;
	for(i=0;str[i]!='\0';i++);
	return i;
}

/*----------------main.c------------------- */
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

/*
output:
Enter str1 = sneha
str1 = sneha
After Copying of str1 to str2
str2 = sneha
Length of new string is = 5
Enter str1 = Thunder soft
str1 = Thunder soft
After Copying of str1 to str2
str2 = Thunder soft
Length of new string is = 12
*/
