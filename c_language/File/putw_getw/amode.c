#include<stdio.h>

int main()
{
FILE *fp=fopen("numbers.txt","a+");
if(fp)
	printf("file opened successful\n");
else	
	printf("file opened not successful\n");
int i;

putw(13,fp);
putw(14,fp);
putw(15,fp);

//fclose(fp);
rewind(fp);

//fp=fopen("numbers1.txt","r");
while((i=getw(fp))!=EOF)
	printf("%d\n",i);
return 0;
}
