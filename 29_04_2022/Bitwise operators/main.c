#include "header.h"

int main (void)
{
  int data,pos,a=100,b=200;
  
  printf ("Enter Data to check LSB bit set or not\n");
  scanf ("%d",&data);
  LSB (data);

  printf ("Enter Data to check MSB bit set or not\n");
  scanf ("%d",&data);
  MSB (data);
  
  printf ("Enter data for get nth bit of number\n");
  scanf ("%d",&data);
  printf ("Enter bit position\n");
  scanf ("%d",&pos);
  get_nth_bit (data,pos);
  
  printf ("Enter bit position to set nth bit of number\n");
  scanf ("%d",&data);
  printf ("Enter bit position\n");
  scanf ("%d",&pos);
  set_nth_bit (data,pos); 

  printf ("Enter bit position to clear nth bit of number\n");
  scanf ("%d",&data);
  printf ("Enter bit position\n");
  scanf ("%d",&pos);
  clear_nth_bit (data,pos);
  
  printf ("Enter bit position to toggle nth bit of number\n");
  scanf ("%d",&data);
  printf ("Enter bit position\n");
  scanf ("%d",&pos);
  toggle_nth_bit (data,pos);
 
  printf ("Swap using bit wise operator\n");
  printf ("Before swap A = %d\t,B = %d\n",a,b);
  swap (&a,&b);
  printf ("After swap A = %d\t,B = %d\n",a,b);

  return 0;
}
