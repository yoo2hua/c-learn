// if语句
#include <stdio.h>
#include <string.h>
int main()
{
  /* code */
  int input = 0;
  printf("你要学习C语言吗？\n");

  scanf("%d", &input);
  if (input == 1)
    printf("年薪百万");
    else
    printf("渣渣前端");
  return 0;
}
