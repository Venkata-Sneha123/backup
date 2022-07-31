#include<stdio.h>
#include<stdlib.h>

void swap(void *a,void *b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
}


int main()
{
int choice;
void a,b;
printf("1.int\n2.float\n3.char\n4.double\n5.long double\nchoose data type: ");
scanf("%d",&choice);
switch(choice)
{
		
	case 1: swap(&(int)a,&(int)b)
		printf("After Swaping a = %d b = %d\n",a,b);
		break;
		
	case 2: swap(&(float)a,&(float)b);
		printf("After Swaping a = %d b = %d\n",a,b);
		break;
	case 3: 
		swap(&(char)a,&(char)b);
		printf("After Swaping a = %d b = %d\n",a,b);
		break;
	
	case 4: 
		swap(&(double)a,&(double)b);
		printf("After Swaping a = %d b = %d\n",a,b);
		break;
	case 5: long double a,b;
		printf("Enter a = ");
		scanf("%d",&a);
		printf("Enter b = ");
		scanf("%d",&b);
		swap(&a,&b);
		printf("After Swaping a = %d b = %d\n",a,b);
		break;
	default: printf("Invalid input\n");
		 exit(0);
}
return 0;
}
