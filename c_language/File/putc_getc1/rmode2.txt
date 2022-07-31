#include<stdio.h>
#include<stdlib.h>

void read(FILE *);
void write(FILE *);
void append(FILE *);
void read_write(FILE *);
void write_read(FILE *);
void append_read(FILE *);

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

int main()
{
int choice;
FILE *fp;
printf("Enetr a choice\n1.rmode\n2.wmode\n3.amode\n4.r+mode\n5.w+mode\n6.a+mode\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
	read(fp);
	break;
case 2:
	write(fp);
	break;

case 3:
	append(fp);
	break;

case 4:
	read_write(fp);
	break;
case 5:
	write_read(fp);
	break;
case 6:
	append_read(fp);	
	break;
default:
	printf("Please enter a valid option\n");
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
