/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int check_palindrome (char *str)
{
    int i,j;
    for (i=0;*(str+i)!='\0';i++);
    for (j=0,i--;*(str+j)!='\0';j++,i--)
    {
        if (*(str+j) != *(str+i))
           return 1;
    }
    return 0;
}
int main()
{
   char str[20];
   printf ("Enter String\n");
   scanf ("%s",str);
   if (!check_palindrome (str))
        printf ("Given String is palindrome\n");
   else
        printf ("Given string is not palindrome\n");
   return 0;
}
