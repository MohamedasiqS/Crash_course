#include <stdio.h>
void copy_des (int *arr,int size,int *des)
{
  int i;
  for (i=0;i<size;i++)
    *(des+i) = *(arr+i);
  return ;
}

int main(void)
{
  int arr[] = {10,20,85,74,66,45};
  int size,i;
  size = sizeof(arr)/sizeof(arr[0]);
  int des[size];
  copy_des (arr,size,des);
  for (i=0;i<size;i++)
      printf("%d\t",*(des+i));
  printf ("\n");
  return 0;
}
