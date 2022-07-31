#include <stdio.h>

int str_len(char str[]);
void str_rev(char str[],int l);

//main function
int main()
{
char a[50];
int l;
printf("Enter a string: ");
scanf("%[^\n]s", a);
l=str_len(a);
str_rev(a,l);
return 0;
}

//string length function
int str_len(char str[])
{
int i=0;
while(str[i]!='\0')
	i++;
return i;
}

//reverse function
void str_rev(char str[],int l)
{
int i;
for(i=l-1; i>=0; i--)
{
	printf("%c", str[i]);	
}
printf("\n");
}
