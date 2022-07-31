/*  print odd and even numbers using two threads in C */

#include<stdio.h>
#include<unistd.h>
#include<pthread.h>

#define SIZE 100
int arr[SIZE];

void *even(void *ptr)
{
	printf("Even Numbers in 1-100:\n----------------------\n");
	for(int i=1;i<=SIZE;i++) // To print EVEN numbers
	{
		if(i%2 == 0)  // if remainder is zero, then it is EVEN number
			printf("%d ",i);
	}
	printf("\n");	
}

void *odd(void *ptr)
{
	printf("\nOdd Numbers in 1-100:\n-----------------------\n");
	for(int i=1;i<=SIZE;i++) // To print ODD numers
	{
		if(i%2 != 0)  // if remainder is not zero, then it is ODD number
			printf("%d ",i);
	}	
	printf("\n");	
}


int main()
{
	/* The pthread_create() function starts a new thread in the calling process. */
	pthread_t newthread[2]; //Varaible of pthread
	pthread_create(&newthread[0],NULL,&even,NULL); //Creating a pthread for even
	pthread_create(&newthread[1],NULL,&odd,NULL); //Creating a pthread for odd
	/* The  pthread_join()  function  waits for the thread specified by thread to terminate.  If that thread has already terminated, then pthread_join() returns immediately.The thread specified by thread must be joinable.*/
	pthread_join(newthread[0],NULL); 
	pthread_join(newthread[1],NULL);
	return 0;
}
