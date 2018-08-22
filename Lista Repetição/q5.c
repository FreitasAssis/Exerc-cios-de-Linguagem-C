#include <stdio.h>

int main(int argc, char **argv){
  int i, n, soma=0;
  printf("Digite a quantidade de termos da PA\n");
  scanf("%d", &n);
  for (i = 1; i <= n; i++) {
    soma += i;
  }
  printf("A soma é %d\n", soma);
}
