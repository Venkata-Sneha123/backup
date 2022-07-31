#include <stdio.h>
#include <string.h>

char checkCapital(char* str)
{
    static int i = 0;
    if (i < strlen(str)) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            return str[i];
        }
        else {
            i = i + 1;
            return checkCapital(str);
        }
    }
    else
        return 0;
}

int main()
{
    char str[100];
    char capital;
    printf("Enter string: ");
    scanf("%[^\n]s", str);
    capital = checkCapital(str);
    if (capital == 0)
        printf("Capital letter is not found in the string\n");
    else
        printf("First Capital letter =  %c\n", capital);
    return 0;
}
