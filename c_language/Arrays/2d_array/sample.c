#include<stdio.h>

int main()
{
int i,j,a[2][3];
printf("Enter elements for matrix(%dx%d):\n",2,3);
for(i=0;i<2;i++)
{
	for(j=0;j<3;j++)
		scanf("%d",&a[i][j]);
}

printf("The matrix is:\n");
for(i=0;i<2;i++)
{
	for(j=0;j<3;j++)
		printf("%d ",a[i][j]);
	printf("\n");
}
return 0;
}

/*
output:
Enter elements for matrix(2x3):
1 2 3
4 5 6
The matrix is:
1 2 3 
4 5 6 

*/


