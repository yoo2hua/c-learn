// 操作符
#include <stdio.h>

int main()
{
  /* code */

  // int a = 5 % 2;
  // printf("%d", a);

  /**
   * 移位（2进制位）移操作符
   * << 左移
   * >> 右移
   */

  int a = 1;
  // 整型1占4个字节（32bit位）
  // a用2进制也就是
  // 00000000000000000000000000000001

  a << 1; // 2
  a << 2; // 4
  for (int i = 1; i < 30; i++)
  {
    printf(" a << %d = %d\n", i, a << i);
  }

  return 0;
}
