#include <stdio.h>

int main()
{
  int a[5] = {10, 20, 30, 40, 50};
  int (*ap)[5];
  int cnt;

  printf("%d\n", ap);

  ap = &a;

  printf("%d\n", ap);

  for(cnt=0; cnt<5; cnt++)
  {
    printf("%d번째 요소: %d\n", cnt+1, (*ap)[cnt]);
  }
}