extern int row,col;

void add_matrix(int* p1, int* p2,int* p3)
{
int i,j;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			(*(p3+i)+j)=(*(p1+i)+j)+(*(p2+i)+j);
			printf("%d\t",(*(p3+i)+j));
		}
		printf("\n");
	}


}
