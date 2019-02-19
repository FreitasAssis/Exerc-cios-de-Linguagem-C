#include <stdio.h>
#include <math.h>
int main(int argc, char ** argv) {
  printf("Digite o ângulo:");
  scanf("%d\n", &a);
  if (a>=0 && a<=90) {
    printf("Primeiro quadrante");
  } else if (a>90 && a<=180) {
    printf("Segundo quadrante");
  } else if (a>180 && a<=270) {
    printf("Terceiro quadrante");
    else {
    printf("Quarto quadrante");
  }
  return 0;
}
