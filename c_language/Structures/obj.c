#include<stdio.h>

int main()
{
struct data{
	int num1;
	int num2;
};
struct data ptr;
struct data *data_pointer;
data_pointer = &ptr+1;
printf("%p\n",*data_pointer);
}
