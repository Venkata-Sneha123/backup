/*swap the values of 2 struct elements , find area by passing struct to fn 
use fn pointers , macro fn */

#include<stdio.h>
#define SWAP(x,y) int t;t=x;x=y;y=t;
struct student
{
        unsigned int len;
	unsigned int wid;
	unsigned int area;

};

struct react
{
        unsigned int len1;
	unsigned int wid1;
	unsigned int area1;
};

void area(struct student s1,struct react s2)
{
area.s1=s1.len*s1.wid;
area.s2=s2.len1*s2.wid1;
printf("area s1=%d\n",area.s1);
printf("area s2=%d\n",area.s2);
}

int main()
{
struct student s1={3,4,10};
struct react s2={7,3,20};
void (*fp)(struct,struct);

printf("Before swap\ns1.len= %d s2.len1=%d\n",s1.len,s2.len1);
SWAP(s1.len,s2.len1);
printf("After swap\ns1.len= %d s2.len1=%d\n",s1.len,s2.len1);

fp=area;
fp(s1,s2);
return 0;
}

