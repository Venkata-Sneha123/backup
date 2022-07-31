#include <stdio.h>
#include<string.h>

void str_cat(char a[],char b[]);

int main()
{
char str1[50];
char str2[50];
printf("Enter 1st string: \n");
scanf("%s",str1);
printf("Enter 2nd string: \n");
scanf("%s",str2);
str_cat(str1,str2);
return 0;
}

void str_cat(char a[],char b[])
{
int i,j;	
for(i=0;a[i]!='\0';i++);
for(j=0;b[j]!='\0';j++,i++)
{
      a[i]=b[j];
}
a[i]='\0';
printf("Output(combination of two strings): %s\n",a);
printf("length of new string = %ld\n",strlen(a));
}
