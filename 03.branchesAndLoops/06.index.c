// if语句（switch）
#include <stdio.h>
#define bool int
#define true 1
#define false 0
int main()
{
  // getchar接收字符，scanf接收数字，putchar和printf差不多

  int day = 0;
  scanf("%d", &day);
  switch (day)
  {
  case 1:
    /* code */
    printf("星期1");
    break;
  case 2:
    /* code */
    printf("星期2");
    break;
  case 3:
    /* code */
    printf("星期3");
    break;

  default:
    break;
  }
};