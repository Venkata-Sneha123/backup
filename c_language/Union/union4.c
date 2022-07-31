#include<stdio.h>
#include<string.h>

union 
{
	unsigned int age:3;
}Age;
int main()
{
Age.age=4;//0100 => 100 => 4
printf("Size of Union = %ld\n",sizeof(Age));

printf("Age.age = %d\n",Age.age);

Age.age=7;//0111 => 111 => 7
printf("Age.age = %d\n",Age.age);

Age.age=8;//1000 => 000 => 0
printf("Age.age = %d\n",Age.age);

Age.age=9;//1001 => 001 => 0
printf("Age.age = %d\n",Age.age);

return 0;
}
