// 抽象
#include <stdio.h>

// 函数
int Add(int x, int y){
  return x + y;
};

int main()
{
  /* code */
  int num1 = 1; // 局部变量 -- 定义在{}内部的变量
  int num2 = 4;


  int sum = 0;

  sum = Add(num1, num2);
  printf("sum = %d", sum);

  return 0;
}
