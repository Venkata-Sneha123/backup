#include<stdio.h>

void str_cpy(char dest[],char src[])
{
int i;
for(i=0;dest[i]!='\0';i++);
for(i=0;src[i]!='\0';i++) 
{
        dest[i] = src[i];
}
    dest[i] = '\0';
printf("After copying of two strings = %s\n",dest);
}

int main()
{
char s1[50],s2[100];
printf("Enter 1st string :\n");
scanf(" %[^\n]s",s1);
printf("The 1st string is : %s\n",s1);
printf("Enter 2nd string :\n");
scanf(" %[^\n]s",s2);
str_cpy(s1,s2);
return 0;
}

