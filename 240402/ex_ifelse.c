#include <stdio.h>

int main()
{
  int j;
  char grade;

  printf("점수 입력");
  scanf("%d",&j);

  if(j>=90)
  {
    grade='A';
  }
  else if(j>=80)
  {
    grade='B';
  }
  else if(j>=70)
  {
    grade='C';
  }
  else if(j>=60)
  {
    grade='D';
  }
  else
  {
    grade='F';
  }

  printf("점수 등급: %c학점\n",grade);
  return 0;
}