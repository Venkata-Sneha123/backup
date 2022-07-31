#include<stdio.h>
#define SIZE 5
typedef struct char_array
{
	char ch;
}ch_arr;

void sort(ch_arr *s1)
{
	for(int i = 0;i < SIZE;i++)
	{
		for(int j = 0;j < SIZE-i-1;j++)
		{
			if(s1[j].ch > s1[j+1].ch)
			{
				int temp = s1[j].ch;
				s1[j].ch = s1[j+1].ch;
				s1[j+1].ch = temp;
			}
		}
	}
}	


void print_char(ch_arr *s1)
{
	for(int i = 0;i < SIZE;i++)
	{
		printf("%c ", s1[i].ch);
	}
	printf("\n");
}
