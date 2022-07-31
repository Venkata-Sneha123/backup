#include<stdio.h>
#define SIZE 5

void print(char (*arr)[SIZE]);

int main()
{
    char ch[SIZE]={'a','e','i','o','u'};
    char (*Arr)[SIZE];
    int i;
    Arr=&ch;
    print(Arr);
    printf("\n");
    return 0;
}

void print(char (*arr)[SIZE])
{
    int i=0;
    for(i=0;i<SIZE;i++)
    {
         printf("%c ",((*arr)[i]));
    }
}

