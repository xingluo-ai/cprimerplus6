#include <stdio.h>

int main() {
  int SECONDS_PER_YEAR = 3.156e7;
  int age;
  printf("请输入你的年龄：");
  scanf("%d", &age);
  printf("你的年龄%d  对应的秒数是:%d", age, age * SECONDS_PER_YEAR);
  return 0;
}