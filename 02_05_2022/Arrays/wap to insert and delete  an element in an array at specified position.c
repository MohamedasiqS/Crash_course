#include <stdio.h>

void insert (int *arr,int *size,int pos,int data)
{
   int i;
   for (i = (*size)-1, (*size)++ ;i>=0 ; i--)
      arr[i+1] = arr[i];
   arr[pos-1] = data;
   return ;
}

void delete (int *arr,int *size,int pos)
{
  int i;
  for (i=pos-1;i<*size;i++)
    arr[i] = arr[i+1];
  (*size)--;
  return ;
}

void get (int *arr,int pos)
{
   printf("%d\n",arr[pos-1]);
   return ;
}

void display (int *arr,int *size)
{
   int i;
   for (i=0;i<*size;i++)
   {
    printf("%d\t",arr[i]);
    printf("\n");
   }
}

int main(void)
{
  int arr[] ={10,20,50,60,70};
  int size,a = 1,choice,pos,data;
  size =sizeof(arr)/sizeof(arr[0]);
  while (a)
  {
   printf ("Enter your choice\n");
   printf ("1.Insert 2.Delete 3.Get 4.exit 5.display\n");
   scanf ("%d",&choice);
   switch (choice)
   {
   case 1:
	 printf("Enter Position\n");
         scanf ("%d",&pos);
         printf ("Enter Data\n");
         scanf ("%d",&data);
         insert (arr,&size,pos,data);
         break;
   case 2:
        printf("Enter Position\n");
        scanf ("%d",&pos);
	delete (arr,&size,pos);
	break;
   case 3:
        printf("Enter Position\n");
        scanf ("%d",&pos);
        get (arr,pos);
	break;
   case 4:
         a = 0;
         printf ("EXIT\n");
         break;
   case 5:
        display (arr,&size);
        break;
   default:
        printf ("Enter valid option\n");
   }
 }
  return 0;
}
