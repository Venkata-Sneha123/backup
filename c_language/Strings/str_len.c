#include<stdio.h>

int str_len(char str[])
{
int i=0;
while(str[i]!='\0')
        i++;
return i;
}

int main()
{
char s[50];
printf("Enter any string: \n");
scanf("%[^\n]s",s);
int l;
l=str_len(s);
printf("Length of the string = %d\n",l);
return 0;
}
