#include <stdio.h>

int main()
{

  // 逗号表达式（Comma Expression）可以用来在一条语句中同时执行多个操作，并且整个表达式的值将是最后一个操作的值。
  // 逗号表达式的语法是：
  // expression1, expression2, ..., expressionN。
  int a = 1, b = 2, c = 3, result;

  // 使用逗号表达式执行多个操作，并将最后一个操作的值作为结果
  result = (a += 2,     // a = a + 2，将 a 的值增加 2，a变成3 
            b += 3,     // b = b + 3，将 b 的值增加 3，b变成5
            c += 4,     // c = c + 4，将 c 的值增加 4，c变成7
            a + b + c); // 将 a、b、c 的值相加

  printf("Result: %d\n", result); // 输出结果: 15

  return 0;
}
