/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int find_first_string (char *str,char *find)
{
    int i=0,j;
    for (i=0;*(str+i)!='\0';i++)
    {
      j = 0;
      while (*(str+i)==*(find+j) || *(find+j) == '\0')
      {
        if (*(find+j) == '\0')
          return 0;
        i++;
        j++;
      }
    }
    return 1;
}
int main(void)
{
    char *str = "Write your code in this editor and press Run button";
    char find[10];
    printf("%s\n",str);
    printf ("Enter search string\n");
    scanf ("%s",find);
    if (!find_first_string (str,find))
      printf("String Found\n");
    else
      printf ("String not found\n");
    return 0;
}