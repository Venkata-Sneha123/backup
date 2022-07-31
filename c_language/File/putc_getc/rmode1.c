#include<stdio.h>
#include<stdlib.h>

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
char c;
FILE *fp;
printf("Enetr a choice\n1.rmode\n2.wmode\n3.amode\n4.r+mode\n5.w+mode\n6.a+mode\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
	fp=my_fopen("file.txt","r");
	while((c=getc(fp))!=EOF)
	{
		printf("%c",c);
	}
	break;
case 2:
	fp=my_fopen("file.txt","w");
	
	fputc('T',fp);
	fputc('h',fp);
	fputc('u',fp);
	fputc('n',fp);
	fputc('d',fp);
	fputc('e',fp);
	fputc('r',fp);
	break;

case 3:
	fp=my_fopen("file.txt","a");
	
	fputc('T',fp);
	fputc('h',fp);
	fputc('u',fp);
	fputc('n',fp);
	fputc('d',fp);
	fputc('e',fp);
	fputc('r',fp);
	break;

case 4:
	fp=my_fopen("file.txt","r+");
	
	fputc('H',fp);
	fputc('i',fp);
	
	while((c=getc(fp))!=EOF)
	{
		printf("%c",c);
	}
	break;
case 5:
	fp=my_fopen("file.txt","w+");
	
	fputc('H',fp);
	fputc('i',fp);
	while((c=getc(fp))!=EOF)
	{
		printf("%c",c);

	}
	break;
case 6:
	fp=my_fopen("file.txt","a+");
	
	fputc('H',fp);
	fputc('i',fp);
	while((c=getc(fp))!=EOF)
	{
		printf("%c",c);
	}
	break;
default:
	printf("Please enter a valid option\n");
	exit(0);
}

}
