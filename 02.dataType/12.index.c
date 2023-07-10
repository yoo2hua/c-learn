// 数组
#include <stdio.h>

int main()
{
  /* code */
  int arr[10] = {1, 2, 3, 4, 5}; // 定义一个存放10个整数数字的数组


  arr[7] = 7;
  // char ch[20];
  // float arr2[5];  // 定义一个存放5个浮点的数组
  // 遍历数组并逐个输出
  for (int i = 0; i < 10; i++)
  {
    printf("%d ", arr[i]);
  }
  return 0;
}
