#include <stdio.h>
#include <intrin.h>

int main()
{

  int ret = 0;
  char password[20];
  printf("请输入密码：");
  scanf("%s", password);
  printf("请确认（Y/N）：");
  ret = getchar();
  if (ret == "Y")
  {
    printf("确认成功\n");
  }
  else
  {
    printf("放弃确认\n");
  }
};
