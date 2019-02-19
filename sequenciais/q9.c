#include <stdio.h>
int main(int argc, char ** argv) {
  printf("Digite um número inteiro");
  scanf("%d\n", &a);
  printf(a%2==0?"PAR":"IMPAR");
  return 0;
}
