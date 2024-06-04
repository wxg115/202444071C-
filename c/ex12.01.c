#include <stdio.h>

int main()
{
  char sa[] = "Spacezone";
  char *ps = "Spacezone";
  int cnt;

  printf("배열 주소값: %d\n", sa);
  printf("포인터 주소값: %d\n", ps);

  for(cnt=0; cnt<9; cnt++)
  {
    printf("sa[%d] : %c\t", cnt, sa[cnt]);
    printf("*(ps + %d) : %c\n", cnt, *(ps + cnt));
  }
}