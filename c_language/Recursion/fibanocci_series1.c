#include<stdio.h>

int fibonacci(int);

int main()
{ 
int num,i; 
printf("Enter number of terms :\n"); 
scanf("%d",&num); 

printf("fibonacci series is : \n");
for(i=0;i<num;i++) 
{ 
	printf("%d ",fibonacci(i));
}
printf("\n");
return 0;
}
 
int fibonacci(int n)
{ 
if(n == 0 || n == 1) 
	return 1; 

else 
	return (fibonacci(n-1)+fibonacci(n-2));
} 
