
#include <stdio.h>
#include <unistd.h>
#include <pthread.h>

#define n 26
#define m 26
char ch=65;
pthread_t id[2];

void *capital(void *ptr)
{
	for(int i=1;i<=n;i++)
	{
		sleep(1);
		printf("%c\n",ch);
	}	
}

void *small(void *ptr)
{
	for(int i=1;i<=m;i++)
	{
		sleep(1);
		printf("%c\n",ch+32);
		ch++;
}	
}


int main()
{
	/* The pthread_create() function starts a new thread in the calling process. */
	pthread_t newthread[2]; //Varaible of pthread
	pthread_create(&newthread[0],NULL,&capital,NULL); //Creating a pthread for capital
	pthread_create(&newthread[1],NULL,&small,NULL); //Creating a pthread for small 

	// The  pthread_join()  function  waits for the thread specified by thread to terminate. 
	pthread_join(newthread[0],NULL); 
	pthread_join(newthread[1],NULL);
	return 0;
}
