/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int palindrome (char *str,int n)
{
    static int i=0;
    if (n<0)
        return 1;
    if (str[i] == str[n] || str[i]+32 == str[n] || str[i] == str[n]+32)
     {
         i++;
         palindrome (str,--n);
     }
    else
         return 0;
}

int main()
{
   char str[]="Madam";
   int i;
   for (i=0;str[i]!='\0';i++);
   i--;
   if ( palindrome(str,i) )
      printf ("Given string is palindrome\n");
   else
      printf ("Given string is not palindrome\n");
   return 0;
}
