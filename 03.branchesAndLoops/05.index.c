// if语句（循环输出奇数）
#include <stdio.h>
#define bool int
#define true 1
#define false 0
int main()
{

  for (int i = 0; i <= 100; i++)
  {
    if (i % 2 == 1)
    {
      printf("%d,", i);
    }
  }
};