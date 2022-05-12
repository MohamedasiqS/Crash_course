/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(void)
{
    int arr [10] = {11,25,730,40,8700,60,70,80,90,100},i;
    for (i=0;i<10;i++)
    {
       if (arr[i] == (arr[i]>>2)<<2)
          printf ("%d is multiplication of 4\n",arr[i]);
    }
    return 0;
}