#include <stdio.h>

int pi(int input)
{
  return input*input*3.14;
}

int main()
{
  int input;
  float val;
  scanf("%d", &input);
  val=pi(input);
  printf("%.2f", val);
}