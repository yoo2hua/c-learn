// 循环语句
#include <stdio.h>
#include <string.h>
int main()
{
  /* code */
  int line = 0;
  printf("你要学习C语言吗？\n");
  while (line <= 100)
  {
    /* code */
    printf("敲一行代码%d \n ", line);
    line++;
  };

  if (line >= 100)
    printf("年薪百万");

  return 0;
}
