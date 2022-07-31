#include <stdio.h>
#include<stdlib.h>
int main() 
{
char str[50], ch;
int count = 0;
printf("Enter a string: ");
scanf("%[^\n]s",str);
printf("Enter a character to find its frequency: ");
scanf("\n%c", &ch);
for (int i = 0; str[i] != '\0'; ++i) 
{
if (ch == str[i])
       ++count;
}
printf("Frequency of %c = %d\n", ch, count);
return 0;
}
