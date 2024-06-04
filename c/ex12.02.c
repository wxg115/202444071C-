#include <stdio.h>

int main()
{
  int cnt, size, choice;
  char *task[] = {
                 "Desk",
                 "Computer",
                 "Books",
                 "USB",
                 "EXIT"
  };

  size = sizeof(task) / sizeof(task[0]);

  for(cnt=0; cnt<size; cnt++)
  {
    printf("%d.%s\n", cnt+1, task[cnt]);
  }

  while(1)
  {
    printf("\n숫자입력");
    scanf("%d", &choice);

    if(choice <1 || choice > 5)
    {
      printf("입력 오류");
      continue;
    }
    else if(choice == 5)
    {
      break;
    }
    else
    {
      printf("%s", task[choice-1]);
    }
  }
}