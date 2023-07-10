#include<stdio.h>
int num1 = 20; // 全局变量 -- 定义在{}之外的变量
int main()
{
  /* code */
  int num1 = 1; // 局部变量 -- 定义在{}内部的变量
  int num2 = 0;
  scanf("%d%d", &num1, &num2); // 用户输入2个数字
  int sum = 0;
  sum = num1 + num2;
  printf("sum = %d", sum);
  return 0;
}
