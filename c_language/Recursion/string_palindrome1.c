#include <stdio.h>
#include <string.h>
 
void check_palindrome(char [], int);
 
int main()
{
char str[15];
printf("Enter a string : ");
scanf("%s", str);
check_palindrome(str, 0); 
return 0;
}
 
void check_palindrome(char str[], int i)
{
    int len = strlen(str) - (i + 1);
    if (str[i] == str[len])
    {
        if (i + 1 == len || i == len)
        {
            printf("%s is a palindrome\n",str);
            return;
        }
        check_palindrome(str, i+1);
    }
    else
    {
        printf("%s is not a palindrome\n",str);
    }
}
