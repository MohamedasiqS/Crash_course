#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   FILE *fp=NULL;
   fp = fopen("file.txt","r");
   if (fp == NULL)
   {
	perror ("File not exist");
        exit (1);
   }
   char ch;
   
   while ((ch = fgetc(fp)) != EOF)
   {
	putchar (ch);
   }
  fclose (fp);
   return 0;
}
