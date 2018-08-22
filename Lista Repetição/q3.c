#include <stdio.h>

int main(int argc, char **argv){
  int i, soma=0;
  for (i = 1; i <= 200; i++) {
    soma += i;
  }
  printf("soma = %d\n", soma);
}
