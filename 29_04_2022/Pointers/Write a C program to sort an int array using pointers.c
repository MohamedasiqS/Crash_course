/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void descendingsort (int *arr,int size)
{
    int i,j,min;
    for (i=0;i<size;i++)
    {
        min = i;
        for (j=i+1;j<size;j++)
        {
          if (*(arr+j) > *(arr+min))
            min = j;
        }
        if (min != i)
        {
          *(arr+i) = *(arr+i) ^ *(arr+min);
          *(arr+min) = *(arr+i) ^ *(arr+min);
          *(arr+i) = *(arr+i) ^ *(arr+min);
        }
    }
}
int main()
{
    int arr[]={34,56,12,44,90,86,35};
    int size,i;
    size = sizeof(arr)/sizeof(arr[0]);
    descendingsort (arr,size);
    for (i=0;i<size;i++)
      printf("%d\n",*(arr+i));
    return 0;
}
