/* WAP to add real and imaginary values of 2 structures and store into 3rd structure and print the complex number of 3rd stucture.
s3.real=s1.real+s2.real;
s3.img=s1.img+s2.img;
print(s3.real,s3.img)
*/

#include<stdio.h>

typedef struct
{
int real;
int img;
}num;

typedef struct
{
int real;
int img;
}num1;

typedef struct
{
int real;
int img;
}num2;

int main()
{
num s1;
num1 s2;
num2 s3;

printf("Enter s1 real and s1 img  = ");
scanf("%d %d",&s1.real,&s1.img);
printf("Enter s2 real and s2 img  = ");
scanf("%d %d",&s2.real,&s2.img);
s3.real=s1.real+s2.real;
s3.img=s1.img+s2.img;
printf("Adding real and imaginary = %d+j%d\n",s3.real,s3.img);
}
