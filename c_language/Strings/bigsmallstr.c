#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],substr[100][100],c;
    int i=0,j=0,k=0,a,minIndex=0,maxIndex=0,max=0,min=0;
    printf("Enter a string:\n");
    scanf("%[^\n]",str1);
    while(str1[k]!='\0')
    {
        j=0;
        while(str1[k]!=' '&&str1[k]!='\0')
        {
            substr[i][j]=str1[k];
            k++;
            j++;
        }
        substr[i][j]='\0';
        i++;
        if(str1[k]!='\0')
        {
            k++;
        }
    }
    int len=i;
    max=strlen(substr[0]);
    min=strlen(substr[0]);
    for(i=0;i<len;i++)//finding max & min length 
    {
       a=strlen(substr[i]);
       if(a>max)
        {
            max=a;
            maxIndex=i;
        }
        if(a<min)
        {
            min=a;
            minIndex=i;
        }
    }
  printf("Largest Word = %s\nSmallest word = %s\n",substr[maxIndex],substr[minIndex]);
return 0;
}
