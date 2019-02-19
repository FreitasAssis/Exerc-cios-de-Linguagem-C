#include <stdio.h>
int main(int argc, char ** argv) {
  printf("Digite a nota do aluno");
  scanf("%f\n", &x);
  printf((x>=0 && x<=10)?"Nota válida":"Nota inválida");
  return 0;
}
