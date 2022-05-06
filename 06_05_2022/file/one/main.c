#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  FILE *fp = NULL;
  fp = fopen ("file.txt","w");
  if (fp == NULL)
  {
     printf ("File does n't create\n");
     exit(1);
  }
  char str[1000]={},ch;
 
  while (fgets(str,1000,stdin) != NULL)
  {
      fputs(str,fp);
  }
 
  fclose (fp);
  return 0;
}
