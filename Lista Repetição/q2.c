#include <stdio.h>

int main(int argc, char **argv){
  int i;
  for (i = 200; i >= 1;) {
    printf("i = %d\n", i--);
  }
}
