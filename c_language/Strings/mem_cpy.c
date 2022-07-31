/*
 Difference between string copy and memcopy
1. memcpy() function is used to copy a specified number of bytes from one memory to another. 
2. memcpy() function acts on memory rather than value. 
3. The memcpy function is used to copy a block of data from a source address to a destination address. Below is its prototype.
syntax:
void * memcpy(void * destination, const void * source, size_t num);
1. Whereas, strcpy() function is used to copy the contents of one string into another string.
2. Whereas, strcpy() function acts on value rather than memory.
3. The strcpy() function copies the string pointed by source (including the null character) to the destination.
4. The strcpy() function also returns the copied string.
syntax:
char* strcpy(char* destination, const char* source);
*/


#include<stdio.h>
#include<string.h>

void mem_cpy(void *dest, void *src, size_t n) 
{
int i;
char *src_char = (char *)src;
char *dest_char = (char *)dest;
for (i=0; i<n; i++)
      dest_char[i] = src_char[i]; 
}
int main() 
{
char src[40],dest[100];
printf("Enter a string:");
scanf("%[^\n]s",src);
mem_cpy(dest, src, strlen(src)+1);
printf("The copied string:%s\n", dest);
return 0;
}

/*
output:
Enter a string:sneha
The copied string:sneha
Enter a string:hello world
The copied string:hello world
*/
