3
//entrada de dados
#include <stdio.h>

int main() {
  float num, soma;

  printf("\nDigite um numero:");
  scanf("%f", &num);

  soma = num + 5;

  printf("O valor da var 'num' + 5 é : %.1f", soma);

  return 0;
}
