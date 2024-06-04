#include <stdio.h>

void creed(char **ppc);
void target(char **ppc);

int main()
{
  char *pc;

  creed(&pc);
  printf("%s\n", pc);

  target(&pc);
  printf("%s\n", pc);
}

void creed(char **ppc)
{
  *ppc = "123";
}

void target(char **ppc)
{
  *ppc = "asd";
}