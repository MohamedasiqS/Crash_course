#include <stdio.h>
#include <stdlib.h>
int main()
{
  FILE *fp = NULL;
  char str[1000];
  fp = fopen ("append.txt","w");
  if (fp == NULL)
  {
    perror ("File not opened");
    exit (0);
  }
  while (fgets(str,1000,stdin) != NULL)
  {
      fprintf(fp,"%s",str);
  }
  fclose(fp);
 
  printf ("\nEnter data for append in existing file\n");  
  fp = fopen ("append.txt","a");
  if (fp == NULL)
  {
    perror ("File not opened");
    exit (0);
  }
  while (fgets(str,1000,stdin) != NULL)
  {
      fprintf(fp,"%s",str);
  }
  fclose (fp);
  return 0;
}
