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
    int y;
    char ch;
    short int s;
    printf("sizeof double=%ld\n", my_sizeof(x));
    printf("sizeof int=%ld\n", my_sizeof(y));
    printf("sizeof char=%ld\n", my_sizeof(ch));
    printf("sizeof short int=%ld\n", my_sizeof(s));
    printf("sizeof structure=%ld\n", my_sizeof(stu));
    return 0;
}
