/*
swap the values of 2 struct elements , find area by passing struct to fn 
use fn pointers , macro fn 
*/

#include<stdio.h>
#define a(length,width) length*width

struct struct_a 
{
    unsigned int len;
    unsigned int wid;
    unsigned int area;
};

struct struct_b
{
    unsigned int len;
    unsigned int wid;
    unsigned int area;
};

int swap(struct struct_a s1,struct struct_b s2)
{
    int t;
    t=s1.area;
    s1.area=s2.area;
    s2.area=t;
    printf("After swap:\n");
    printf("s1: %d\ns2: %d\n",s1.area,s2.area);
}

int main()
{
    struct struct_a s1;
    struct struct_b s2;
    int (*fp)(struct struct_a,struct struct_b);
    printf("Enter length and width of a structure: ");
    scanf("%d %d",&s1.len,&s1.wid);
    printf("Enter length and width of b structure: ");
    scanf("%d %d",&s2.len,&s2.wid);
    s1.area=a(s1.len,s1.wid);
    s2.area=a(s2.len,s2.wid);
    printf("Before swap:\n");
    printf("s1: %d\ns2: %d\n",s1.area,s2.area);
    fp=swap;
    fp(s1,s2);
    return 0;
}
