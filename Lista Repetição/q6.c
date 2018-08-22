#include <stdio.h>

int main(int argc, char **argv){
  int i, n, m;
  printf("Digite os números do intervalo\n");
  scanf("%d %d", &n, &m);
  if (n < m) {
    for (i = n; i <= m; i++) {
      printf("%d\t\n", i);
    }
  }
  else {
    for (i = m; i <= n; i++) {
      printf("%d\t\n", i);
    }
  }
}
