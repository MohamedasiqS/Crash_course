#include <stdio.h>
#define SIZE 5

int isfull(int *top_full)
{
   if(*top_full == SIZE-1)
         return 1;
   else
         return 0;
}

int isempty(int *top_empty)
{
    if(*top_empty == -1)
         return 1;
    else
         return 0;
}

void push(int *arr_push,int *top_push)
{
  if(isfull(top_push))
     printf("Stack is full\n");
  else
     {
       printf("Enter Data\n");
       scanf("%d",&arr_push[++(*top_push)]);
     }
   return ;
}

int pop(int *arr_pop,int *top_pop)
{
  if(isempty(top_pop))
      printf("Stack is empty\n");
  else
     {
       return arr_pop[(*top_pop)--];
     }
}

void peek(int *arr_peek,int *top_peek)
{
  if(isempty(top_peek))
      printf("Stack is empty\n");
  else
      printf("Peek element in stack is %d\n",arr_peek[*top_peek]);
}

void display(int *arr_display,int *top_display)
{
   if(isempty(top_display))
      printf("Stack is empty\n");
   else
   {
   int i ;
   for(i=*top_display ; i>=0 ;i--)
      printf("%d\n",arr_display[i]);
   }
}

int main(void)
{
   int arr[SIZE],top = -1;
   int a = 1,choice,ret;
   while (a)
   {
     printf("\n Enter choice \n");
     printf(" 1.push \n 2.pop \n 3.peek \n 4.display \n 5.exit \n");
     scanf("%d",&choice);
     switch (choice)
     {
       case 1:
             push(arr,&top);
             break;
       case 2:
             ret = pop(arr,&top);
   	     if (ret >=0)
		printf("Pop element is %d\n",ret);
             break;
       case 3:
             peek(arr,&top);
             break;
       case 4:
             display(arr,&top);
	     break;
       case 5:
	     a = 0;
             break;
       default:
             printf("Enter valid number\n");
      }
    }
   return 0;
}
