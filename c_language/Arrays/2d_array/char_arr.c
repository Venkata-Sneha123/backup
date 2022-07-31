#include<stdio.h>
#define ROW 4
#define COL 3

int main()
{
char arr[ROW][COL]={{'a','b','c'},{'d','e','f'},{'g','h','i'},{'j','k','l'}};
printf("Number of rows = %d\n",ROW);
printf("Number of coloums = %d\n",COL);
printf("size of arr = %ld\n",sizeof(arr));
printf("arr[3][1]=%c\n",arr[3][1]);
printf("arr[2]=%s\n",arr[2]);
//printf("arr[][2]=%c\n",arr[][2]);
return 0;
}
