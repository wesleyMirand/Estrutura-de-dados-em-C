//operadores lógicos, verificar 3 numero se são iguais utilizando operadores lógico e estruturas condicionais com "IF".Mandar uma mensagem caso esses numeros forem iguais.

#include <stdio.h>

int main() {
  int a, b, c;
  printf("Digite um numero: ");
  scanf("%d", &a);

  printf("Digite um numero: ");
  scanf("%d", &b);

  printf("Digite um numero: ");
  scanf("%d", &c);

  if (a == b) {
    if (b == c) {
      printf("A, B, C tem numeros iguais!");
    }
  }

  return 0;
}
