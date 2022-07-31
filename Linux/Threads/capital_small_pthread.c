/* print A and a letters using two threads in C */

#include <stdio.h>
#include <unistd.h>
#include <pthread.h>

#define n 26
#define m 26
char ch=65;
pthread_t id[2];

void *capital(void *ptr)
{
	/* The  pthread_self()  function  returns  the ID of the calling thread. */
	id[0] = pthread_self();
	for(int i=1;i<=n;i++)
	{
		sleep(1);
		printf("%c\tPID of %c = %ld\n",ch,ch,id[0]);
	}	
}

void *small(void *ptr)
{
	/* The  pthread_self()  function  returns  the ID of the calling thread. */
	id[1]=pthread_self();
	for(int i=1;i<=m;i++)
	{
		sleep(1);
		printf("%c\tPID of %c = %ld\n",ch+32,ch+32,id[1]);
		ch++;
}	
}


int main()
{
	/* The pthread_create() function starts a new thread in the calling process. */
	pthread_t newthread[2]; //Varaible of pthread
	pthread_create(&newthread[0],NULL,&capital,NULL); //Creating a pthread for capital
	pthread_create(&newthread[1],NULL,&small,NULL); //Creating a pthread for small 
	/* The  pthread_join()  function  waits for the thread specified by thread to terminate.  If that thread has already terminated, then pthread_join() returns immediately.The thread specified by thread must be joinable.*/
	pthread_join(newthread[0],NULL); 
	pthread_join(newthread[1],NULL);
	return 0;
}
