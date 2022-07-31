#include<stdio.h>  
int rev(int);
int main()
{
    int num,x;
    printf("Enter a number: ");
    scanf("%d",&num);
    x=rev(num);
    printf("Reverse of given number is: %d\n",x);
    return 0;
}

int rev(int num)
{
    static int sum,r;
    if(num)
    {
        r=num%10;
        sum=sum*10+r;
        rev(num/10);
    }
    else
        return 0;
    return sum;
}
