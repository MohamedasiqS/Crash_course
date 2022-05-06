#include <stdio.h>

int sum (int n)
{
   if (n == 0)
     return 0;
  return (n+sum(n-1));
}
int main(void)
{
  int n,ret;
  printf ("Enter n value\n");
  scanf ("%d",&n);
  ret = sum(n);
  printf ("Sum of %d number is %d\n",n,ret);
  return 0;
}
