#include <stdio.h>

int get_intager();

int main()
{
  int a = get_intager();
  int b = get_intager();

  printf("%d + %d = %d", a, b, a+b);

  return 0;
}

int get_intager()
{
  int a;
  scanf("%d", &a);

  return a;
}