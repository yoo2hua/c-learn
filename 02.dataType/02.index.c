#include<stdio.h>
int main()
{
  /* code */
  printf("%d字节 char\n", sizeof(char));
  printf("%d字节 short\n", sizeof(short));
  printf("%d字节 int\n", sizeof(int));
  printf("%d字节 long\n", sizeof(long));
  printf("%d字节 long long\n", sizeof(long long));
  printf("%d字节 float\n", sizeof(float));
  printf("%d字节 double\n", sizeof(double));

  return 0;
}
