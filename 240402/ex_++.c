#include <stdio.h>

int main()
{
  int val,a;

  a=8;
  val=++a;

  printf("a=8일때\n");
  printf("1.val=++a이면 val=%d, a=%d\n",val,a);
  
  a=8;
  val=a++;
  printf("2.val=a++이면 val=%d, a=%d\n",val,a);
}