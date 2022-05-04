/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
void swap (int *arr,int min,int i)
{
    arr[i] = arr[min] ^ arr[i];
    arr[min] = arr[min] ^ arr[i];
    arr[i] = arr[min] ^ arr[i];
}
void min_max (int *arr,int size)
{
    int i,j,min;
    for (i=0;i<size-1;i++)
    {
        min = i;
        for (j=i+1;j<size;j++)
        {
            if (arr[j] < arr[min])
               min = j;
        }
        if ( min != i)
          swap (arr,min,i);
    }
    
}

int main()
{
    int arr[]={4,78,94,55,1,17,20};
    int size;
    size = sizeof(arr)/sizeof(arr[0]);
    min_max(arr,size);
    printf("%d is minimum\n",arr[0]);
    printf("%d is maximum\n",arr[size-1]);
    return 0;
}