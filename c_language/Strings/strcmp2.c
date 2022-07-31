#include<stdio.h>
#define max 100
int fun(char*const a,char*const b)
{
        int i,j;
        for(i=0;a[i]&&b[i];i++)
        {
                if(a[i]!=b[i])
                break;
        }
        return a[i]-b[i];
}
int main()
{
        char a[max]="embedded";
        char b[max]="embedded";
        int (*fp)(char*a,char*b);
        fp=fun;
        int i=fp(a,b);

        if(i==0)
                printf("both are equal\n");
        else if(i<0)
                printf("a is small b is large\n");
        else
                printf("b is small a is large\n");

}
