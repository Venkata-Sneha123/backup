/*
Implement your own sizeof() operator.
1. To use the sizeof(), we can take the value using a variable x, using &x, it will print the address of it. 
2. Now if we increase the value of &x then it may increase in different way.
3. If only one byte is increased, that means it is character, if the increased value is 4, then it is int or float and so on. 
4. So by taking the difference between &x + 1 and &x, we can get the size of x.
5. Here we will use macro as the datatype is not defined in the function. 
6. And one more thing, we are casting using (char*) so, it will tell us that how many character type data can be placed in that place.
7. As the character takes one byte of data.
*/

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
