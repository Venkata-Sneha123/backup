#include <stdio.h>
#define MAX 100
int main()
{
   int freq[128]; //Ascii-7: 0-127 (printable characters)
   char str[MAX];
   printf("Enter a string:");
   scanf("%[^\n]s",str);
   
   for(int i=0;i<128;i++)
        freq[i]=0;   // initialize frequency array to zero
        
    for(int i=0;str[i]!='\0';i++) // logic to count frequency of each character
    {
        char c=str[i];  // current character
        freq[(int)c]++;  // convert into int and increment
    }
    
    for(int i=0;i<128;i++) // Display requency of non-zero characters
    {
        if(freq[i]!=0)
            printf("%c=%d\n",(char)i,freq[i]);
    }
    return 0;
}

