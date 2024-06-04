#include <stdio.h>

struct person
{
  char name[10];
  char gender;
  int age;
};

int main()
{
  struct person mc[3] =
  {
    {"홍길동", 'M', 23},
    {"김가을", 'W', 20},
    {"이겨레", 'M', 25}
  };
  int cnt;

  for(cnt=0; cnt<3; cnt++)
  {
    printf("%4d\t", cnt+1);
    printf("%s %c %d\n", mc[cnt].name, mc[cnt].gender, mc[cnt].age);
  }
}