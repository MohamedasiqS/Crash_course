/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int fibbonaci (int fibb)
{
    if (fibb == 0 || fibb == 1)
        return fibb;
    return ( fibbonaci(fibb-1) + fibbonaci(fibb-2) );
}

int main()
{
   int i;
   for (i=0;i<8;i++)
   printf ("%d\n",fibbonaci(i));

    return 0;
}
