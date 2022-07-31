/* putw,getw operations in r+mode */

#include<stdio.h>

int main()
{
FILE *fp=fopen("numbers1.txt","r+");
if(fp)
	printf("file opened successful\n");
else	
	printf("file opened not successful\n");
int i;

putw(10,fp);
putw(11,fp);
putw(12,fp);
fclose(fp);
//rewind(fp);

fp=fopen("numbers1.txt","r");
while((i=getw(fp))!=EOF)
	printf("%d\n",i);
return 0;
}
