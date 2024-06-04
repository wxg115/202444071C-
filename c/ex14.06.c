#include <stdio.h>

struct date
{
  int year;
  int month;
  int day;
};

struct student
{
  int sno;
  char name[10];
  int age;
  struct date *sd;
};

int main()
{
  struct date d = {2023, 03, 03};
  struct student s = {20231234, "홍길동", 23};

  s.sd = &d;

  printf("%d %s %d %d. %d. %d.", s.sno, s.name, s.age, s.sd->year, s.sd->month, s.sd->day);
}