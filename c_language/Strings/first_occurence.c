#include <stdio.h>
 
int main()
{
  	char str[100], word[100];
  	int i, j, Flag;
  	printf("Please Enter any String :");
  	scanf("%[^\n]s",str);
	printf("Please Enter the Word that you want to Search for :");
  	scanf("\n%[^\n]s",word);
  	for(i = 0; str[i] != '\0'; i++)
	{
		if(str[i] == word[0])
		{
			Flag = 1;
			for(j = 0; word[j] != '\0'; j++)
			{
				if(str[i + j] != word[j])
				{
					Flag = 0;
					break;
				}
			}	
		}
		if(Flag == 1)
		{
			break;
		} 
	}
	if(Flag == 0)
  	{
  		printf("Sorry!! We haven't found the Word %s\n ", word);
	}
	else
	{
		printf("We found '%s' at position %d\n", word, i + 1);
	}	
  	return 0;
}
