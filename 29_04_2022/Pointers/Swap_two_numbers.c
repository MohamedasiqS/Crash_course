#include <stdio.h>
void swap(int *a,int *b)
{
    *a = (*a * *b) / (*b = *a);
     return ;
}
int main()
{
    int a=10,b=20;
    printf("Before swap : A = %d , B = %d\n",a,b);
    swap(&a,&b);
    printf("After swap : A = %d , B = %d\n",a,b);
    return 0;
}