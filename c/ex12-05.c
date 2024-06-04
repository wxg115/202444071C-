#include <stdio.h>

int hap(int a, int b);
int cha(int a, int b);

int main()
{
  int result;
  int (*fp)(int, int);

  fp = hap;
  result = fp(100, 200);
  printf("%d\n", result);

  fp = cha;
  result = fp(100, 200);
  printf("%d", result);
}

int hap(int a, int b)
{
  int sum;

  sum = a + b;
  return sum;
}

int cha(int a, int b)
{
  int sub;

  sub = a - b;
  return sub;
}