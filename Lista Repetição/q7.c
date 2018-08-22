#include <stdio.h>

int main(int argc, char **argv){
  int num, den, soma=0;
  for (num = 1, den = 1; den <= 50; den++) {
    printf("%d / %d = %d\n", num, den, num/den);
    soma += num/den;
    num += 2;
  }
  printf("A soma é %d\n", soma);
}
