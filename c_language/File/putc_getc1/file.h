#include<stdio.h>

FILE * my_fopen(const char *ptr,const char *mode)
{
FILE *fp=fopen(ptr,mode);

if(fp)
{
	printf("File opened successful\n");
	return fp;
}
else	
{
	printf("File opened not successful\n");
	exit(0);
}
}

void read(FILE *fp)
{
	char c;
	fp=my_fopen("file.txt","r");
	while((c=getc(fp))!=EOF)
	{
		printf("%c",c);
	}
}

void write(FILE *fp)
{
	fp=my_fopen("file.txt","w");
	
	fputc('T',fp);
	fputc('h',fp);
	fputc('u',fp);
	fputc('n',fp);
	fputc('d',fp);
	fputc('e',fp);
	fputc('r',fp);
}

void append(FILE *fp)
{
	fp=my_fopen("file.txt","a");
	
	fputc('T',fp);
	fputc('h',fp);
	fputc('u',fp);
	fputc('n',fp);
	fputc('d',fp);
	fputc('e',fp);
}
void read_write(FILE *fp)
{
	char c;
	fp=my_fopen("file.txt","r+");
	
	fputc('H',fp);
	fputc('i',fp);
	
	while((c=getc(fp))!=EOF)
	{
		printf("%c",c);
	}
}
	
void write_read(FILE *fp)
{
	char c;
	fp=my_fopen("file.txt","w+");
	
	fputc('H',fp);
	fputc('i',fp);
	while((c=getc(fp))!=EOF)
	{
		printf("%c",c);

	}
}

void append_read(FILE *fp)
{
	char c;
	fp=my_fopen("file.txt","a+");
	
	fputc('H',fp);
	fputc('i',fp);
	while((c=getc(fp))!=EOF)
	{
		printf("%c",c);
	}
}
