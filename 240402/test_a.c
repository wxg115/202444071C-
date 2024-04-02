#include <stdio.h>

int main()
{
  int num=0, result=0;

  printf("원하는 단을 입력하세요.");
  scanf("%d", &num);

  for(int i=1; i<=9; i++)
  {
    result=num*i;
    printf("%d * %d = %d\n",num,i,result);
  }
}