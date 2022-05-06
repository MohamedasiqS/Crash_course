/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void swap ( void *a,void *b)
{
    float temp;
    temp = *(float *)a;
    *(float *)a = *(float *)b;
    *(float *)b = temp;
}
int main()
{
    float a = 12.93,b=39.56;
    
    printf ("Before Swap A = %f,B=%f\n",a,b);
    swap (&a,&b);
    printf ("After Swap A = %f,B=%f\n",a,b);
    return 0;
}
