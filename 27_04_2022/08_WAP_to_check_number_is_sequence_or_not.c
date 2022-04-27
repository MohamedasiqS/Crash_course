#include <stdio.h>

int check_sequence_or_not (const int *arr_arg,const int size)
{
    int i,j,count,check_var;
    
    for (i=0;i<size;i=i+count)
    {
        check_var = arr_arg[i];
        j = i;
        count = 0;
        
        while (check_var == arr_arg[j])
        {
            j++;
            count++;
        }
        
        if (check_var != count)
        {
            return -1;
        }
    }
    return 0;
}

int main(void)
{
    int arr[] = {5,5,5,5,5,7,7,7,7,7,7,7,1,2,2,4,4,4,4,8,8,8,8,8,8,8,8};
    int size,ret;
    size = sizeof(arr)/sizeof(arr[0]);
    ret = check_sequence_or_not(arr,size);
    if (ret == 0)
      printf("Valid\n");
    else
      printf("Invalid\n");
    return 0;
}