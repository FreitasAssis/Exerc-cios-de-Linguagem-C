#include <stdio.h>

int main(int argc, char **argv){
  int i, n, soma=0;
  printf("Digite a quantidade de termos\n");
  scanf("%d",&n);
  for (i = 1; i <= n; i++) {
    soma += (1/i);
    printf("1 / %d = %d\n", i, 1/i);
  }
  printf("A soma é %d\n", soma);
}
