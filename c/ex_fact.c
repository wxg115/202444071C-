#include <stdio.h>

int fact(int n);

int main()
{
  int input, result;

  printf("전달> 팩토리얼을 구할 정수 입력: ");
  scanf("%d", &input);
  printf("호출> fact()함수를 호출하여 팩토리얼 계산\n");

  result=fact(input);
  printf("회신> %d!: %d\n", input, result);
  return 0;
}

int fact(int n)
{
  if(n<=1)
  {
    return 1;
  }
  else
  {
    printf("수행> %d!: %d * (%d - 1)\n", n, n, n);
    return(n*fact(n-1));
  }
}