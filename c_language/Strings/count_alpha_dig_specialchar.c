#include <stdio.h>

int main()
{
char str[100];
int alphabets, digits, others, i;
alphabets = digits = others = i = 0;
printf("Enter any string : ");
scanf("%[^\n]s",str);
while(str[i]!='\0')
{
	if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
	{
        	alphabets++;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
               digits++;
        }
        else
        {
              others++;
        }
        i++;
}
printf("Total Alphabets           = %d\n",alphabets);
printf("Total Digits              = %d\n",digits);
printf("Total Special characters  = %d\n",others);
return 0;
}
