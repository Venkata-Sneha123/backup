#include<stdio.h>

int main()
{
struct emp{
	char name[20];
	char status[25];
	int age;
}
v[2]={"Annie","Jackson",25,"David","Bush",27};//After definition only we declaring a 2 stucture arrays 
					      // and intialized with data
int i;
for(i=0;i<=1;i++) // i = 0, i = 1 , i = 2(false)
{
	printf("v[%d].name = %s v[%d].status = %s\n",i,v[i].name,i,v[i].status); 
						// it will print v[0].name = Annie , v[0].status = Jackson for i=0
						 // it will print v[1].name = David , v[1].status = Bush for i=1
}
return 0;
}
/*
Output:
Annie Jackson
David Bush
*/
