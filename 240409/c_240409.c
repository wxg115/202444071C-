#include <stdio.h>

int main()
{
    int i=0, j=0;

    while(i<=10)
    {
        j=i%2;

        if(j==0)
        {
            printf("A");
        }

        else
        {
            printf("B");
        }
        i++;
    }
    //1.ABABABABAB
}