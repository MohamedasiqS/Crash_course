#include <stdio.h>
int copy_fun (int *src,int *des,int size)
{
    int i;
    for (i=0;i<size;i++)
    {
        *(des+i) = *(src+i);
    }
    return 0;
}
int main(void)
{
    int arr[] = {10,50,40,80,97},des[]={};
    int size,i;
    size = sizeof(arr)/sizeof(arr[0]);
    copy_fun (arr,des,size);
    for (i=0;i<size;i++)
      printf ("%d\t",des[i]);
    return 0;
}