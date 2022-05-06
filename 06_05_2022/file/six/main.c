#include <stdio.h>
#include <stdlib.h>
int main(void)
{
  FILE *src = NULL,*des = NULL;
  char ch;
  src = fopen("source.txt","r");
  des = fopen("dest.txt","w+");
  if (src == NULL)
  {
    perror ("File does not opened");
    exit (1);
  }
  if (des == NULL)
  {
    perror ("File does not opened");
    exit (1);
  }
  while ( (ch = getc(src)) != EOF)
  {
        fputc(ch,des);
  }
  fclose(src);
  fclose(des);
  return 0;
}
