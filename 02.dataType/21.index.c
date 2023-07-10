#include <stdio.h>

int main()
{
  char ch = 'w';
  char *pch = &ch;
  printf("%p\n", pch);
  printf("%d\n", sizeof(pch));
  printf("%c\n",  *pch);
  // * 为 解引用操作符/间接访问操作符 
  return 0;
}
