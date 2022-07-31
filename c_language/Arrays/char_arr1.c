#include<stdio.h>

int main() 
{
char (*arr)[5];
char str[5] = "HellonA";
arr = &str;
printf("%s\n",*arr);
  return 0;
}
