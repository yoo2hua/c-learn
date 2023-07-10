// struct
#include <stdio.h>
#include <string.h>

struct Book
{
  /* data */
  char name[20]; // C语言程序设计
  short price;   // 50
};

int main()
{
  // 利用结构体类型创建一个该类型的结构体变量
  struct Book b1 =
      {
          "C语言程序设计",
          55};

  printf("书名： %s\n", b1.name);
  // printf("价格： %d\n", b1.price);
  b1.price = 15;
  printf("修改后的价格： %d\n", b1.price);

  // b1.name 是一个数组，数组名本质是一个地址， 不能直接用=直接赋值
  strcpy(b1.name, "C++"); // strcpy - string copy 字符串拷贝-库函数-string.h
  printf("修改书名： %s\n", b1.name);

  struct Book *pb = &b1;
  printf("书名：%s\n", (*pb).name); // 利用*pb打印出我的书名和价格
  printf("书名：%s\n", pb->name);   // 利用pb打印出我的书名和价格

  /**
   * .    点操作符    结构体变量.成员
   * ->   箭头操作符  结构体指针->成员
   */
  return 0;
}
