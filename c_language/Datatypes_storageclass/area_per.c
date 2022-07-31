#include<stdio.h>
#define pi 3.14
#define area_circle(pi,r) pi*r*r
#define area_square(s) s*s
#define area_rectangle(l,b) l*b
int main()
{
enum area{circle=1,square,rectangle};
enum area i;
scanf("%d",&i);
switch(i)
{
case circle:printf("area of circle:%f\n",area_circle(pi,4));
            break;
case square:printf("area of square:%f\n",area_square(10.5));
             break;
case rectangle:printf("area of rectangle:%d\n",area_rectangle(10,20));
             break;
}
return 0;
}
