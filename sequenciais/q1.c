#include <stdio.h>
int main(int argc, char ** argv) {
  int x;
  printf("Digite um número inteiro");
  scanf("%d\n", &x);
  if (x != 0) {
    printf(x>0?"O valor é positivo":"O valor é negativo");
  } else {
    printf("O valor é nulo");
  }
  return 0;
}
