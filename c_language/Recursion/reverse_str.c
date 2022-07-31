# include <stdio.h>

void reverse_string(char *str)
{
if (*str)
{
	reverse_string(str+1);
	printf("%c", *str);
}
}

int main()
{
char str[50];
printf("Enter a string: ");
scanf("%s",str);
reverse_string(str);
printf("\n");
return 0;
}


