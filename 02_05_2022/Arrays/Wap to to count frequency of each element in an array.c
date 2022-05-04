#include <stdio.h>
void frequent_element(int *arr,int size)
{
  int i,j,count=1;
  int freq [14] = {};
  for (i=0;i<size;i++)
  {
    count = 1;
    if (freq[i] != 1)
    {
    for (j=i+1;j<size;j++)
    {
       if (arr[i] == arr[j])
        {
          freq[j] = 1;
          count++;
        }
    }
    }
    if (count != 1)
      printf ("No of count is %d of %d element \n",count,arr[i]);
  }
  return ;
}

int main(void)
{
  int arr[] = {56,89,77,89,5,56,40,21,63,5,5,21,77,10};
  int size,i;
  size = sizeof (arr) / sizeof (arr[0]);
  for(i=0;i<size;i++)
    printf ("%d ",arr[i]);
  printf("\n");
  frequent_element (arr,size);
  return 0;
}
