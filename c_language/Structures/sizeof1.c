#include<stdio.h>
#define my_sizeof(type) (char *)(&type+1)-(char*)(&type)

struct student
{
char a;
int b;
short v;
char c;
}stu;

int main()
{
    double x;
    printf("%p\n%p\n",&x,&x+1);
    printf("%d\n",(char*)&x+1-(char*)&x);
    printf("%d\n",(char*)(&x+1));
    printf("%d\n",(char*)(&x));
    printf("sizeof double=%ld\n", my_sizeof(x));
    printf("sizeof structure=%ld\n", my_sizeof(stu));
    return 0;
}
