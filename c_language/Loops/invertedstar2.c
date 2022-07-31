#include <stdio.h>  

int main()  
{  
int i, j, rows, k;  
printf ("Enter number of rows: ");  
scanf("%d", &rows);   
printf("\n");  
for (i = 1; i <= rows; i++)   
{  
	for (j = 1; j <= i; j++)   
        {  
            printf(" ");   
        }  
        for (k = i; k <= rows; k++)  
        {  
            printf("*");  
        }  
        printf ("\n");   
}  
return 0;
}  
