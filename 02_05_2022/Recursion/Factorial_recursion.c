/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int factorial (int fact)
{
    if (fact == 0)
        return 1;
    return ( fact*factorial(fact-1) );
}

int main()
{
   
   printf ("%d\n",factorial(5));

    return 0;
}
