#include<stdio.h>
#define print(a) printf("%s\n",a);

void fun(char*a)
{
int i,j,count;
for(i=0;a[i];i++)//it will iterate upto null character
{
	for(j=0;j<i;j++)//we want to cheak a[i] and a[j] if both same loop get break 
        {
        	if(a[j]==a[i])
                	break;
        }
       if(j==i)//if both(j==i) are pointing to same character means we found that charater is first time we are going to count
       {                                    //if both are not same that already counted
       for(j=j+1,count=1;a[j];j++)//after (j==i) we start to count that char already we found 1 time so count start's with 1.
       {
       		if(a[i]==a[j])
                	count++;
       }
       printf("%c presect %d times\n",a[i],count);
       }
}
}
               
int main()
{
char a[20];
printf("enter the string\n");
scanf("%s",a);
print(a);
void (*fp)(char*a);
fp=fun;
fp(a);
}
