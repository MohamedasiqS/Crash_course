/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void check_first_capital_in_string (char *str)
{
    static int i=0;
    if (str[i]=='\0')
      return ;
    if (str[i]>=65 && str[i]<=90)
    {
         printf ("first capital letter found :%c\n",str[i]);
         return ;
    }
    else if (str[i+1]=='\0')
      printf ("First capital letter not found\n");
    i++;
    check_first_capital_in_string (str);
    
}

int main()
{
   char str[]="capItal";
   int i;
   check_first_capital_in_string(str);
   return 0;
}