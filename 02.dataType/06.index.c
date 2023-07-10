// 枚举
#include <stdio.h>

int main()
{
  /* code */

  enum Sex
  {
    MALE,
    FEMALE = 20,
    SECRET
  };

  enum Sex s = FEMALE;
  s = 3;
  printf("%d", s);
  return 0;
}
