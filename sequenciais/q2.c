#include <stdio.h>
int main(int argc, char ** argv) {
  int x;
  printf("Digite um número inteiro");
  scanf("%d\n", &x);
  printf(x%5==0?"O valor é múltiplo de 5":"O valor não é múltiplo de 5");
  return 0;
}
