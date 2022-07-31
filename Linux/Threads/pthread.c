/* To understang pthreads*/

#include<stdio.h>
#include<pthread.h>
#include<unistd.h>

#define n 8
#define m 3
pthread_t id[2]; 

void * myturn(void *arg)
{
	int i;
  /* The  pthread_self()  function  returns  the ID of the calling thread. */
	id[0]=pthread_self();
	for(i=1;i<=n;i++)
	{
		sleep(1);
		printf("Myturn = %d\tPID of myturn = %ld\n",i,id[0]);
	}
}

void *yourturn(void *ptr)
{
	int i;
  /* The  pthread_self()  function  returns  the ID of the calling thread. */
	id[1]=pthread_self();
	for(i=1;i<=m;i++)
	{
		sleep(1);
		printf("Yourturn = %d\tPID of youturn = %ld\n",i,id[1]);
	}
}


int main()
{
pthread_t newthread[2];
/* The pthread_create() function starts a new thread in the calling process. */
pthread_create(&newthread[0],NULL,&myturn,NULL);
pthread_create(&newthread[1],NULL,&yourturn,NULL);
/* The  pthread_join()  function  waits for the thread specified by thread to terminate. 
If that thread has already terminated, then pthread_join() returns immediately.
The thread specified by thread must be joinable.*/
pthread_join(newthread[0],NULL);
pthread_join(newthread[1],NULL);
return 0;
}
