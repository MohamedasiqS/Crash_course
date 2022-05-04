/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

typedef struct heap
{
    char str[5];
}heap;

void alpha_order (heap *sort)
{
    int i,j;
    char var;
    for (i=1;i<5;i++)
    {
        var = sort->str[i];
        for(j=i-1;(j>=0 && sort->str[j] > var) ;j--)
        {
            sort->str[j+1] = sort->str[j];
        }
        sort->str[j+1] = var;
    }
}
int main(void)
{
    heap *sort;
    int i;
    
    sort = (heap*)malloc(sizeof(heap)*5);
    sort->str[0] = 'h';
    sort->str[1] = 'e';
    sort->str[2] = 'l';
    sort->str[3] = 'l';
    sort->str[4] = 'o';
    
    alpha_order (sort);
    
    for (i=0;i<5;i++)
      printf ("%c\n",sort->str[i]);
}