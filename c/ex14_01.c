#include <stdio.h>
#include <stdlib.h>

struct std
{
  int sno;
  char name[10];
  float avg;
};

int main()
{
  struct std s;

  s.sno = 20201223;
  strcpy(s.name, "홍길동");
  s.avg = 88.33;

  printf("%d %s %.2f", s.sno, s.name, s.avg);
}