#include<stdio.h>


void print(char str[])
{
	printf("%s",str);
}
void scan(char str[])
{
	scanf("%s",str);
}
int main()
{
int a=5;
char email_id[50];
printf("Enter Email id: ");
//scanf("%s",email_id);
printf("a=%d\n",a);

scan(email_id);
print(email_id);
printf("\n");
return 0;
}
