#include <stdio.h>
#include <string.h>
int main()
{
   FILE *fp;
   char str[80];
   fp = fopen("file1.txt", "a");
   printf("Enter your message:");
   scanf("%[^\n]s",str);
   fprintf(fp, "%s",str);
   printf("Your message is appended in file1.txt file.\n");
   fclose(fp);
   return 0;
}
