#include <stdio.h>
int main()
{
  int n,i=1,sum=0;
  scanf("%d",&n);

  while(1)
  {
    if(n%2==0)
    {
      sum+=i;
    }
    i++;
    if(n<=i)
    {
      break;
    }
  }
  printf("%d",sum);
}