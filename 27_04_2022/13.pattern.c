/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int row,col,n;
    printf("Enter n value \n");
    scanf("%d",&n);
    for (row = 0;row < n;row++)
    {
        for (col = 0; col < n*2 ;col++)
        {
            if (col < (n - (row+1)) )
              printf (" ");
            else if (col == (n - (row+1)) )
              printf ("/");
            else if (col > (n - (row+1)) && col < (n+row) && row != n-1)
              printf (" ");
            else if (col == n+row)
              printf ("\\");
            else if (row == n-1 && (col >=1 && col < n*2) )
            {
              printf ("_");
            }
        }
        printf("\n");
    }

    return 0;
}
