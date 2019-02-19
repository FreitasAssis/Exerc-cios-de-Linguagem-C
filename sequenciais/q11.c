#include <stdio.h>
int main(int argc, char ** argv) {
  printf("Digite cinco números inteiros");
  scanf("%d\n", &a);
  scanf("%d\n", &b);
  scanf("%d\n", &c);
  scanf("%d\n", &d);
  scanf("%d\n", &e);
  int maior, menor;
  int array[a, b, c, d, e];
  for (int i = 0; i < 4; i++) {
    if (array[i] > array[i+1]) {
      maior = array[i]
      menor = array[i+1]
    } else {
      menor = array[i]
      maior = array[i+1]
    }
  }
  printf("Maior = %d\nMenor = %d\n", maior, menor);
  return 0;
}
