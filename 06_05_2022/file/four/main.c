#include <stdio.h>
#include <stdlib.h>
int main(void)
{  
   char ch;
   int word = -1,line = 0,character = 0;
   FILE *fp=NULL;
   fp = fopen("count.txt","r");
   if (fp == NULL)
   {
       perror ("File not opened");
       exit (1);
   }
  
   while ((ch = fgetc(fp) ) != EOF)
   {
      if ( ch == ' ')
         word++;
      else if(ch == '\n')
      {
         line++;
	 word++;
      }
      character++;
   }
   printf ("Line :%d ,Words :%d ,characters : %d\n",line,word,character);
   fclose (fp);
   return 0;
}
