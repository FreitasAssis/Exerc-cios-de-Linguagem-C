#include <stdio.h>
int main(int argc, char ** argv) {
  printf("Digite dois números inteiros");
  scanf("%d\n", &x);
  scanf("%d\n", &y);
  printf(x==y?"Os valores são iguais":"Os valores são diferentes");
  return 0;
}
