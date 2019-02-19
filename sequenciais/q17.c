#include <stdio.h>
#include <math.h>
int main(int argc, char ** argv) {
  printf("Digite três nũmeros inteiros: o dia, o mês e o ano");
  scanf("%d\n", &d);
  scanf("%d\n", &m);
  scanf("%d\n", &a);
  if (m>0 && m<13) {
    switch (m) {
      case 1:printf((d>0 && d<32)?"Data válida!":"Data inválida!");
      case 2:printf((d>0 && d<28)?"Data válida!":"Data inválida!");
      case 3:printf((d>0 && d<32)?"Data válida!":"Data inválida!");
      case 4:printf((d>0 && d<31)?"Data válida!":"Data inválida!");
      case 5:printf((d>0 && d<32)?"Data válida!":"Data inválida!");
      case 6:printf((d>0 && d<30)?"Data válida!":"Data inválida!");
      case 7:printf((d>0 && d<32)?"Data válida!":"Data inválida!");
      case 8:printf((d>0 && d<32)?"Data válida!":"Data inválida!");
      case 9:printf((d>0 && d<31)?"Data válida!":"Data inválida!");
      case 10:printf((d>0 && d<32)?"Data válida!":"Data inválida!");
      case 11:printf((d>0 && d<31)?"Data válida!":"Data inválida!");
      case 12:printf((d>0 && d<32)?"Data válida!":"Data inválida!");
      default:printf("Data inválida!");
    }
  } else {
    printf("Data inválida!");
  }
  return 0;
}
