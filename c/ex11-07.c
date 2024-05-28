#include <stdio.h>

int main()
{
  char c=0;
  char *pc;
  pc=&c;

  int i=0;
  int *pi;
  pi=&i;

  double d=0;
  double *pd;
  pd=&d;

  printf("1. 포인터 증감 연산자 사용 전 주소값\n");
  printf("char형 포인터 주소값: %d\n", pc);
  printf("int형 포인터 주소값: %d\n", pi);
  printf("double형 포인터 주소값: %d\n", pd);

  *pc++;
  *pi++;
  *pd++;

  printf("2. 포인터 증감 연산자 사용 후 주소값\n");
  printf("char형 포인터 주소값: %d\n", pc);
  printf("int형 포인터 주소값: %d\n", pi);
  printf("double형 포인터 주소값: %d\n", pd);


}