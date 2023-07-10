// if语句（判断奇数）
#include <stdio.h>
#define bool int
#define true 1
#define false 0
int main()
{
  int a;

  scanf("%d", &a);

  if (a % 2)
  {
    printf("%d 是奇数", a);
  }
  else
  {
    printf("%d 不是奇数", a);
  }
};