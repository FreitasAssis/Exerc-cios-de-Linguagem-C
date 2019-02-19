#include <stdio.h>
int main(int argc, char ** argv) {
  printf("Digite três números inteiros");
  scanf("%d\n", &x);
  scanf("%d\n", &y);
  scanf("%d\n", &z);
  int maior;
  if (x>y && x>z) {
    maior=x;
  } else if (y>z && y>x) {
    maior=y;
  } else maior=z;
  printf("O maior é %d\n", maior);
  return 0;
}
