#include<stdio.h>

int main()
{
FILE *fp = fopen("file.txt","w+");// if file is exist, it will open successfully

if(fp)
	printf("File opened successful\n");
else	
	printf("File opened not successful\n");

char c;

fputc('I',fp);
fputc('N',fp);
fputc('D',fp);
fputc('I',fp);
fputc('A',fp);

//fclose(fp);

rewind(fp);

//fp=fopen("file.txt","r");
while((c=getc(fp))!=EOF)
{
	printf("%c",c);
}
fclose(fp);

return 0;
}


