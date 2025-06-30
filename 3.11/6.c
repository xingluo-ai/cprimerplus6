#include <stdio.h>

int main() {
  const double MOLECULE_WEIGHT = 3.0e-23;
  int QUART_WEIGHT = 950;
  int quarts;
  printf("请输入你的夸克数：\n");
  scanf("夸克数为%d", &quarts);
  double grams = quarts * MOLECULE_WEIGHT;
  double molecules = grams / MOLECULE_WEIGHT;
  printf("%d 夸脱水中大约有 %.2e 个水分子\n", quarts, molecules);
  return 0;
}