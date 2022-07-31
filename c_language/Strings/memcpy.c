#include<stdio.h>
#include<string.h>

void custom_memcpy(void *dest, void *src, size_t n) 
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
custom_memcpy(dest, src, strlen(src)+1);
printf("The copied string:%s\n", dest);
return 0;
}
