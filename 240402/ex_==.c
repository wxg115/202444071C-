#include <stdio.h>

int main()
{
  int a,b;

  printf("첫번째 정수 입력");
  scanf("%d",&a);
  printf("두번째 정수 입력");
  scanf("%d",&b);

  printf("a==b: %d\n",a==b);
  printf("a!=b: %d\n",a!=b);
  printf("a>b: %d\n",a>b);
  printf("a<b: %d\n",a<b);
}