#include <stdio.h>

int main()
{
  int n, x;
  scanf("%d %d", &n, &x);
  printf("%d %d", n, x);

  int A[n];
  for(int i=0; i<n; i++)
  {
    scanf("%d", &A[i]);
  }
  for(int i=0; i<n; i++)
  {
    if(A[i]<x)
    {
      printf("%d ", A[i]);
    }
  }
}