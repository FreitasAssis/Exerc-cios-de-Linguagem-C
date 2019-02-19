#include <stdio.h>
#include <math.h>
int main(int argc, char ** argv) {
  printf("Digite os valores de a, b e c da equação de segundo grau:");
  scanf("%f\n", &a);
  scanf("%f\n", &b);
  scanf("%f\n", &c);
  float delta = pow(b,2) - 4*a*c;
  float raiz1, raiz2;
  int qtdRaiz;
  if (delta == 0) {
    raiz1 = -b /(2*a);
    printf("Tem uma raiz, igual a %f\n", raiz1);
  } else if (delta > 0) {
    raiz1 = (-b + sqrt(delta))/(2*a)
    raiz2 = (-b - sqrt(delta))/(2*a)
    printf("Tem duas raizes, iguai a %f e %f\n", raiz1, raiz2);
  } else printf("Tem duas raizes irracionais", );
  return 0;
}
