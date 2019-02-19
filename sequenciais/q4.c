#include <stdio.h>
int main(int argc, char ** argv) {
  printf("Digite dois números inteiros");
  scanf("%d\n", &x);
  scanf("%d\n", &y);
  if (x!=y) {
    printf(x>y?"%d é maior\n", x:"%d é maior\n", y);
  } else {
    printf("Os valores são iguais");
  }
  return 0;
}
