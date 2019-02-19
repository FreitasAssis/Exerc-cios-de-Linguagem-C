#include <stdio.h>
#include <math.h>
int main(int argc, char ** argv) {
  printf("Digite os três valores inteiros dos lados do triângulo ABC:");
  scanf("%d\n", &a);
  scanf("%d\n", &b);
  scanf("%d\n", &c);
  int maior, menor1, menor2;
  if (a>b && a>c) {
    maior=a;
    menor1=b;
    menor2=c;
  } else if (b>a && b>c) {
    maior=b;
    menor1=a;
    menor2=c;
  } else {
    maior=c;
    menor1=b;
    menor2=a;
  }
  if ((menor1+menor2)>maior) {
    printf("Triângulo");
    if (a==b && a==c) {
      printf("Equilátero");
    } else if (a==b && a!=c) {
      printf("Isósceles");
    } else {
      printf("Escaleno");
    }
  } else {
    printf("Não é triângulo");
  }
  return 0;
}
