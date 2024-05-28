#include <stdio.h>

int main()
{
  int a[10] = {1,2,3,4,5,6,7,8,9,10};
  int *pa = NULL;
  pa = &a;

  printf("%d\n", *pa);
  printf("%d\n", *++pa);

  pa = &a[9];

  printf("%d\n", *pa);
  printf("%d\n", ++*pa);

  pa = &a[0];

  printf("%d\n", *pa++);
  printf("%d\n", *pa);

  a[9] = 10;
  pa = &a[9];

  printf("%d\n", (*pa)++);
  printf("%d", *pa);
}