#include <stdio.h>

int main()
{
  unsigned short a, b, result;

  printf("unsigned short형 유효 범위 : 0~65,535\n");
  printf("1. 첫번째 정수 입력: ");
  scanf("%hu", &a);
  printf("2. 두번째 정수 입력: ");
  scanf("%hu", &b);

  result=a-b;
  printf("뺄셈 연산 : %hu - %hu = %hu\n", a, b, result);
  return 0;
}