#include<stdio.h>

int main()
{
FILE *fp = fopen("file.txt","a+");

if(fp)
	printf("File opened successful\n");
else	
	printf("File opened not successful\n");

char c;

fputc('H',fp);
fputc('i',fp);
fputc('i',fp);

rewind(fp);

while((c=getc(fp))!=EOF)
{
	printf("%c",c);
}
fclose(fp);

return 0;
}


