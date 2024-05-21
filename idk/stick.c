#include <stdio.h>

int main()
{
  int cnt;
  scanf("%d", &cnt);
  int A[cnt];
  int MAX=0;
  int j=0;
  
  for(int i=0; i<cnt; i++)
  {
    scanf("%d", &A[i]);
  }

  for(int i=cnt-1; i>=cnt; i++)
  {
    if(MAX < A[i])
    {
      MAX = A[i];
      j++;
    }
  }

  printf("%d", j);

  return 0;
}