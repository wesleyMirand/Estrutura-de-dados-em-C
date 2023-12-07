//Agora temos o operador lógico "!"="Não", ele inverte se for verdadeiro vira falso e se for falso vira verdadeiro

#include <stdio.h>

int main() {
  int a, b, c;
  printf("Digite um numero para a: ");
  scanf("%d", &a);

  printf("Digite um numero para b: ");
  scanf("%d", &b);

  printf("Digite um numero para c: ");
  scanf("%d", &c);

  if (!(a == b) && b == c) {
    printf("Eles tem valores iguais");
  }

  return 0;
}
