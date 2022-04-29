#include<stdio.h>
#define SIZE 2
int main()
{
    int a[SIZE][SIZE],b[SIZE][SIZE],c[SIZE][SIZE];
    int i,j;
    
    printf("Enter data for Matrix-A\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&*(*(a+i)+j));
        }
    }
    
    printf("Enter data for Matrix-B\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&*(*(b+i)+j));
        }
    }
    
    /** Calculating c[2][2] = a[2][2] + b[2][2] **/
    
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            *(*(c+i)+j) = *(*(a+i)+j) + *(*(b+i)+j);
        }
    }
    
    printf("Addition of 2D Array\n");
    
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ",*(*(c+i)+j));
        }
        printf("\n");
    }
   
}