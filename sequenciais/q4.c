#include <stdio.h>
int main(int argc, char ** argv) {
  printf("Digite dois números inteiros\n");
  int x, y;
  scanf("%d\n", &x);
  scanf("%d\n", &y);
  if (x!=y) {
    printf("%d é maior\n", x>y?x:y);
  } else {
    printf("Os valores são iguais");
  }
  return 0;
}
