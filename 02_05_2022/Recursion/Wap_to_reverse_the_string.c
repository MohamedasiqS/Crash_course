/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void reverse (char *str,int n)
{
    static int i=0;
    char temp;
    if (i>n)
        return ;
    temp = str[i];
    str[i] = str[n];
    str[n] = temp;
    i++;
    reverse (str,--n);
}

int main()
{
   char str[]="string";
   int i;
   for (i=0;str[i]!='\0';i++);
   reverse (str,--i);
   printf ("Reverse string %s\n",str);
   return 0;
}