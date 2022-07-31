//Declare struct elements on heap : struct containing char[] and self ref pointer

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct student
{
char name[20];
int id;
struct student *p;
}stu;

int main()
{
//stu *p=(stu*)malloc(sizeof(stu));
int i,c;
stu s1,s2;
strcpy(s1.name,"sneha");
strcpy(s2.name,"sneh");
for(i=0;s1.name[i]!='\0';i++)
{
if(s1.name[i]==s2.name[i])
	c=1;
else
	c=0;
}
(c==1)?printf("equal\n"):printf("not equal\n");
return 0;
}
