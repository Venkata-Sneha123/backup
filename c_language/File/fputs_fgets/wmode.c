/* fputs, fgets functions in w+ mode  */

#include<stdio.h>

int main()
{
FILE *fp = fopen("string.txt","w+");

if(fp)
	printf("File opened successful\n");
else	
	printf("File opened not successful\n");

char str[20]="Thundersoft";
char str1[20];

fputs(str,fp);

rewind(fp);

fgets(str1,5,fp);

printf("%s\n",str1);
fclose(fp);
return 0;
}


