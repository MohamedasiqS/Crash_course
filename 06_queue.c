#include <stdio.h>
#define SIZE 5
void enque (int *arr_enque,int *front_enque,int *rear_enque)
{
	if (*front_enque == -1)
		*front_enque = 0;

	if(*rear_enque == SIZE-1)
                printf("Queue is Full\n");
	else
	  {	
		printf("Enter Data\n");
		scanf("%d",&arr_enque[++(*rear_enque)]);
	  }
}

int deque(int *arr_deque,int *front_deque,int *rear_deque)
{
	int temp;
	if (*front_deque == -1 || *front_deque == *rear_deque + 1)
	{
	        printf("Queue is empty\n");
		return -1;
	}
	else
	{
	    return arr_deque[(*front_deque)++];
	}
}

void peek(int *arr_peek,int *front_peek)
{
	printf("Peek element in queue is %d\n",arr_peek[*front_peek]);
}

void display (int *arr_display ,int *front_display,int *rear_display)
{
	int i=0;
        for(i = *front_display ; i<= *rear_display;i++)
           printf("%d\n",arr_display[i]);
	printf("\n");
}

int main(void)
{
   int arr[SIZE],front = -1,rear = -1;
   int a = 1,choice,ret;
   while(a)
   {
	printf("\n Enter choice\n");
	printf("\n 1.Enque \n 2.Deque \n 3.peek \n 4.Display \n 5.exit \n");
	scanf("%d",&choice);
	switch (choice)
	{
        case 1:
		enque(arr,&front,&rear);
		break;
        case 2:
		ret = deque(arr,&front,&rear);
		if(ret>=0)
		printf("Deque element is %d\n",ret);
		break;
	case 3:
		peek(arr,&front);
		break;
	case 4:
		display(arr,&front,&rear);
		break;
	case 5:
		a = 0;
		break;
	default :
		printf("Enter valid nummber\n");
         }
    }
    return 0;
}
