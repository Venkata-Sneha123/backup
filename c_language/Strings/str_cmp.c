#include<stdio.h>

int str_cmp(char a[],char b[])
{
int i,j;
  while(a[i] == b[j])
  {
    if(a[i] == '\0')
      return 0;
    a[i]++;
    b[j]++;

  }
return (a[i]-b[j]);
}

int main()
{
char str1[25];
char str2[25];
int value = 0;
printf("Enter 1st string : ");
scanf("%s",str1);
printf("Enter 2nd string : ");
scanf("%s",str2);
value = str_cmp(str1,str2);
printf("Comparison of first and second string is  = %d\n",value);
if (value==0)
{
	printf("Both strings are same\n");
}
else if(value >=1)
{
        printf("str1 >str2\n");
}
else if(value<=1)
{
	printf("str2>str1\n");
}
return 0;
}
