#include <stdio.h>

int asd(int x, int y)
{
  return (x>y)?x:y;
}

int main()
{
  int x,y;
  scanf("%d %d", &x, &y);
  printf("%d", asd(x,y));
}