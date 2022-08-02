#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <errno.h>
#define MAX_SIZE 1024
int main()
{
	int fd, i;
	ssize_t ret;
	char my_buf[MAX_SIZE]="Hello world";
	
	fd = open( "/dev/my_Char_driver", O_RDWR );
	if(fd<0)
		printf("failed acquiring file descriptor return status %d\n",fd);

	
	/* write the contents of my buffer into the device */
	ret = write( fd, my_buf, strlen(my_buf)+1);
	memset(my_buf,0,MAX_SIZE);
	ret= read(fd,my_buf,MAX_SIZE);
	if(ret<0)
		printf("read operation failed with return status %ld\n",ret);
	else
		printf("read data==> %s\n",my_buf);
	close(fd);
}
	

