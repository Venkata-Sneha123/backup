/* fprintf,fscnaf operations in w+mode  */

#include<stdio.h>


int main()
{
FILE *fp=fopen("test.txt","w+");

if(fp)
	printf("File is opened successful\n");
else	
	printf("File is opened notsuccessful\n");

int i=1,j;
char str[20]="harry",str1[20];
float per=45.65,per1;
int d=4,m=6,y=2000,d1,m1,y1;

fprintf(fp,"Roll No. = %d\nName = %s\nPercentage = %f\nDOB = %d-%d-%d\n",i,str,per,d,m,y);

rewind(fp);

fscanf(fp,"Roll No. = %d\nName = %s\nPercentage = %f\nDOB = %d-%d-%d\n",&j,str1,&per1,&d1,&m1,&y1);

printf("Data from the file\nRoll No. = %d\nName = %s\nPercentage = %f\nDOB = %d-%d-%d\n",j,str1,per1,d1,m1,y1);

fclose(fp);
return 0;
}
