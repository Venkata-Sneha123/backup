/*           
 The pattern is:
            0 
         -1 0 1 
      -2 -1 0 1 2 
   -3 -2 -1 0 1 2 3 
-4 -3 -2 -1 0 1 2 3 4 
   -3 -2 -1 0 1 2 3 
      -2 -1 0 1 2 
         -1 0 1 
            0 
        */

#include<stdio.h>
int main()
{
int i,j,k,n=5,m=0,p;
printf("The pattern is:\n");
for(i=1;i<=n;i++)
{
	for(k=1;k<=n-i;k++)
        {
	        printf("   ");
        }
        for(p=m,j=1;j<=(i*2)-1;j++,p++)
        {               
                printf("%d",p);
                printf(" ");       
        }
        m--;
        printf("\n");
}

i=i-2;
m++;
for(i=i;i>=1;i--)
{
	for(k=n-i;k>=1;k--)
        {
        	printf("   ");
        }
        m++;
        for(p=m,j=(i*2)-1;j>=1;j--,p++)
        {               
        	printf("%d",p);
                printf(" ");
            
        }
        printf("\n");        
}
return 0;
}


