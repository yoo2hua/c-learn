// 常量

#include <stdio.h>

#define MAX 10
int main()
{
  /* code */
  // const int num = 4; // const 修饰的常变量
  // printf("%d\n", num);

  const int n = 10; // n是变量， 但又有常属性， 所有n是常变量
  int arr[MAX] = {11};

  printf("%d", arr[0]);
  return 0;
}
