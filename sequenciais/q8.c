#include <stdio.h>
int main(int argc, char ** argv) {
  printf("Digite dois números inteiros");
  scanf("%d\n", &a);
  scanf("%d\n", &b);
  int maior;
  if (a>b) {
    maior = a;
    a = b;
    b = maior
  }
  printf("A ordem crescente é %d, %d", a, b);
  return 0;
}
