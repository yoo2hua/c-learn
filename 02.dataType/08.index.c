// 字符串+转义字符+注释
#include <stdio.h>
#include <string.h>
int main()
{
  /* code */

  printf("%d\n", strlen("c:\\test\\32\\test.c"));
  printf("%d\n", strlen("c:\test\32\test.c"));
  printf("c:\test\32\test.c");

  /**
   * "c:\test"：这部分表示字符串 "c:test"，其中反斜杠后的 't' 字符并不是一个转义字符，而是普通的字符 't'。
   * "\32"：这里的 \32 实际上是一个八进制转义序列，表示 ASCII 码为 32 的字符。ASCII 码为 32 对应着箭头字符。
   * "\test.c"：这部分表示字符串 "est.c"，其中反斜杠后的 't' 并不是一个转义字符。
   * 因此，整个字符串 "c:\test\32\test.c" 实际上是 "c:test est.c"。
  */
  return 0;
}
