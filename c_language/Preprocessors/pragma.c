#include<stdio.h>
#pragma pack(1)

int main()
{
struct stu{
int a;
char b;
float c;
}S;
printf("size of the stucture = %ld\n",sizeof(S));
return 0;
}
/* Output:
size of the stucture = 9
*/

//If we romve the pragma structure padding not done.
#include<stdio.h>
//#pragma pack(1)

/*
int main()
{
struct stu{
int a;
char b;
float c;
}S;
printf("size of the stucture = %ld\n",sizeof(S));
return 0;
}*/

/* Output:
size of the stucture = 12
*/
