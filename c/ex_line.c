#include <stdio.h>

int line(int cnt)
{
  for(int i=1; i<=cnt; i++)
  {
    printf("=====\n");
  }
}

int main()
{
  int cnt;
  scanf("%d", &cnt);
  line(cnt);
}