#include <stdio.h>

void start();

int main()
{
  printf("start() 함수 3회 호출 결과\n");
  start();
  start();
  start();

  return 0;
}

void start()
{
  static int s_cnt=0;
  int a_cnt=0;

  printf("정적변수 = %d\t 동적변수 = %d\n", s_cnt, a_cnt);
  s_cnt++; //정상수행
  a_cnt++; //0으로 초기화
}