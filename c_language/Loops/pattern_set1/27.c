/*
0
1 1 
2 3 5 
8 13 21 34 
55 89 144 233 377 

*/

#include<stdio.h>

int main()
{
   int a=15,n1=0,n2=1;long n3,e[]={1,5,34};
   printf("%d\n%d ",n1,n2);
   for(int i=2,j=1;i<a-1,j<a-1;i++,j++)
   {    
      n3=(long)n1+(long)n2;
      printf("%lu ",n3);
      for(int k=0;k<3;k++)
      {
      	if(n3==e[k])
      		printf("\n");
      }
      n1=n2;n2=n3;
   }
   printf("\n");
   return 0;
}
