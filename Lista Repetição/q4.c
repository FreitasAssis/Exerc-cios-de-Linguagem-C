#include <stdio.h>

int main(int argc, char **argv){
  int i, cont;
  for (i = 0, cont = 1; cont <= 40; cont++) {
    if (i % 2 == 0) {
      printf("pares = %d\n", i += 2);
    }
  }
}
