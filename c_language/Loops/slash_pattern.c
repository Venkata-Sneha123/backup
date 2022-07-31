#include<stdio.h>

int main()
{
int i,j,k,space,rows;
printf("enter no of rows:");
scanf("%d",&rows);
        
for(i=0;i<=rows;i++)
{
	if(i==0)
        {
        	for(k=0;k<=rows;k++);
        } 
	for(space=0;space<=rows-i;space++)
        {
                printf(" ");
        }
        
	for(j=1;j<(2*i-1);j++)
        {
        	if(j==1)
                	printf("/");
            	else if(j==(2*i-2))
                	printf("%c",'\\');
            	else
                	printf(" ");
        }
	
        printf("\n");
}

for(i=0;i<rows;i++)
{
        printf(" _");
}
printf("\n");
return 0;
}
