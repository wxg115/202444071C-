#include <stdio.h>
#define CNT 7

void count_up(int a[], int cnt)
{
  for(int i=0; i<cnt; i++)
  {
    a[i]+=1;
  }
}

int main()
{
  int a[]={1,2,3,4,5,6,7};
  printf("before : \n");
  for(int i=0; i<CNT; a[i])
  {
    printf("%d\n", a[i]);
  }
  count_up(a, sizeof(a)/sizeof(a[0]));
  printf("after : \n");
  for(int i=0; i<CNT; i++)
  {
    printf("%d\n", a[i]);
  }
}