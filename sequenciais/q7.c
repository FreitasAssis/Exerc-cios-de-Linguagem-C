#include <stdio.h>
int main(int argc, char ** argv) {
  printf("Digite as duas notas do aluno");
  scanf("%f\n", &x);
  scanf("%f\n", &y);
  printf(((x*5+y*6)/11)>=5?"Aprovado":"Reprovado");
  return 0;
}
