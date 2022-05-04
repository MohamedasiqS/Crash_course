/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
typedef union LE_BE
{
    char ch[4];
    int b;
}LEBE;

int main (void)
{
    LEBE var;
    var.b = 1;
    if (var.ch[0]==1)
       printf ("Little Endian\n");
    else
       printf ("Big Endian\n");
    return 0;
}