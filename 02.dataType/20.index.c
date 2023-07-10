#include <stdio.h>
#include "var01.c"

void test()
{
  static int a = 1;
  a++;
  printf("%d\n", a);
};

int main()
{
  extern int g_val;

  register int a = 10; // 建议把a定义成寄存器变量

  for (int i = 0; i < 5; i++)
  {
    test();
  }

  printf("%d", g_val);
  return 0;
}
