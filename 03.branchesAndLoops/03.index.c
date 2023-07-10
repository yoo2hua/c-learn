// if语句（嵌套）
#include <stdio.h>
#define bool int
#define true 1
#define false 0
int main()
{
  int a = 10;
  int b = 20;
  if (a > 20)
  {

    if (b)
    {

      printf("123");
    };
  }
  else
    printf("111");
};