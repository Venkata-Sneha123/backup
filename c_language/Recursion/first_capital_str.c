#include <stdio.h>
#include <string.h>

char check_first_capital(char* str)
{
static int i = 0;
if (i < strlen(str)) 
{
	if (str[i] >= 'A' && str[i] <= 'Z') 
	{
            return str[i];
        }
        else 
	{
            i = i + 1;
            return check_first_capital(str);
        }
}
else
	return 0;
}

int main()
{
char str[50];
char ch;
printf("Enter string: ");
scanf("%[^\n]s", str);

ch = check_first_capital(str);

if (ch == 0)
	printf("No capital letter is found in \" %s\" \n",str);
else
        printf("First Capital letter in \" %s \" is : %c\n", str, ch);
return 0;
}


