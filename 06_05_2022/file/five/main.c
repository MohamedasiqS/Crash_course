#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   char ch1,ch2;
   int a = 0,line=1,character = 0;
   FILE *file1 = NULL,*file2 = NULL;

   file1 = fopen ("file1.txt","r");
   file2 = fopen ("file2.txt","r");
   if (file1 == NULL)
   { 
       perror ("File1 does not exist");
       exit (1);
   }
   if (file2 == NULL)
   {
       perror ("File2 does not exist");
       exit (1);
   }
 
   while ( ((ch1 = fgetc(file1)) != EOF) && ((ch2 = fgetc(file2)) != EOF) )
   {
       if (ch1 == ch2)
       {
 	    if (ch1 == '\n')
            {
                line++;
		character = 0;
            }
       }
       else
       {
           a = 1;
           break;
       }
       character++;
   }
   if (a == 0)
      printf ("Both file-1 and file-2 are same\n");
   else
      printf ("Both file-1 and file-2 are different in line %d colunmn %d\n",line,character);
   return 0;
}
