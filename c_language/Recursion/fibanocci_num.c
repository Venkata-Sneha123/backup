#include<stdio.h>

int fibanocci(int);

int main()
{ 
int num,i; 
printf("Enter number of terms :\n"); 
scanf("%d",&num); 

printf("fibanocci series is : \n");
for(i=0;i<num;i++) 
{ 
	printf("%d ",fibanocci(i));
}
printf("\n");
return 0;
}
 
int fibanocci(int n)
{ 
if(n == 0 || n == 1) 
	return 1; 

else 
	return (fibanocci(n-1)+fibanocci(n-2));
} 

