#include <stdio.h>

void LSB (int);
void MSB (int);
void get_nth_bit (int ,int);
void set_nth_bit (int ,int);
void clear_nth_bit (int ,int);
void toggle_nth_bit (int ,int);
void swap (int *,int*);
void LSB (int data)
{
   if (data & 0x01)
      printf ("LSB bit is set\n");
   else
      printf ("LSB bit is not set\n");
}

void MSB (int data)
{
   if (data & 0x80000000)
      printf ("MSB bit is set\n");
   else
      printf ("MSB bit is not set\n");
}

void get_nth_bit (int data,int pos)
{
  if (data & (0x01 << pos))
    printf ("In %d number, bit %d is 1\n",data,pos);
  else
   printf ("In %d number, bit %d is 0\n",data,pos);
}

void set_nth_bit (int data,int pos)
{
   printf ("Before set %d bit : %d\n",pos,data);
   data = data | (0x01 << pos);
   printf ("After set %d bit : %d\n",pos,data);
}

void clear_nth_bit (int data,int pos)
{
   printf ("Before clear %d bit : %d\n",pos,data);
   data = data & ~(0x01 << pos);
   printf ("After clear %d bit : %d\n",pos,data);
}

void toggle_nth_bit (int data,int pos)
{
   printf ("Before toggle %d bit : %d\n",pos,data);
   data = data ^ (0x01 << pos);
   printf ("After toggle %d bit : %d\n",pos,data);
}

void swap (int *a,int *b)
{
  *a = *a ^ *b;
  *b = *a ^ *b;
  *a = *a ^ *b;
}
