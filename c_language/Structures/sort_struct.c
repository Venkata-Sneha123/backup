#include"sort_struct.h"
int main()
{
	ch_arr s1[SIZE];
	printf("Enter %d characters :\n",SIZE);
	for(int i = 0;i < SIZE;i++)
	{
		scanf(" %c", &s1[i].ch);
	}
	printf("Before sorting: ");
	print_char(s1);
	sort(s1);
	printf("After sorting: ");
	sort(s1);
	print_char(s1);
}

