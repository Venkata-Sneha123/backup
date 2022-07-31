#include<stdio.h>

int main()
{
char str[20]="The_answer_is_";

//str[14]='B';
printf("%s\n",str);
/* if str[14] = 'B' , then it will print => The_answer_is_B       */

str[15]='B';
printf("%s\n",str);
/*  if str[15] = 'B' , then it will print => The_answer_is_        */
return 0;
}
