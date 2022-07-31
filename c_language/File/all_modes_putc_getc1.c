/*  Write a program of creating a file in all modes using header files and functions  */

#include<stdio.h>
#include<stdlib.h>
#include"file.h"

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
