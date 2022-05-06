#include <stdio.h>

int reverse (int n)
{
  static int rev = 0;
  int rem;
  if (n == 0)
     return rev;
  rem = n % 10;
  rev = (rev*10)+rem;
  reverse (n/10);
}

int main(void)
{
  int n,ret;
  printf("Enter n value\n");
  scanf("%d",&n);
  ret = reverse (n);
  printf("Reverse of number is %d\n",ret);
  return 0;
}
