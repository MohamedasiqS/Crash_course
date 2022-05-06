/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

typedef int intarr [2][2];

void input (intarr a,intarr b)
{
    int i,j;
    printf ("Input Data for array a\n");
    for (i=0;i<2;i++)
    {
        for (j=0;j<2;j++)
          scanf ("%d",*(a+i)+j);
    }
    
    printf ("Input Data for array b\n");
    for (i=0;i<2;i++)
    {
        for (j=0;j<2;j++)
          scanf ("%d",*(b+i)+j);
    }
}

void add (intarr a,intarr b,intarr c)
{
    int i,j;
    for (i=0;i<2;i++)
    {
        for (j=0;j<2;j++)
         *(*(c+i)+j) =  *(*(a+i)+j) +  *(*(b+i)+j); 
    }
    
}

void display (intarr c)
{
    int i,j;
    printf ("Addition of array a and array b is\n");
    for (i=0;i<2;i++)
    {
        for (j=0;j<2;j++)
          printf ("%d\t",*(*(c+i)+j));
        printf ("\n");
    }
}

int main()
{
    intarr a,b,c;
    
    input (a,b);
    add (a,b,c);
    display (c);
    
    return 0;
}
