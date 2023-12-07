//Além do A e B, teremos uma segunda condição obrigatoria do "E"="&&", obrigar os testes a serem verdadeiros, se não o codigo não executa.

#include <stdio.h>

int main() {
  int a, b, c;
  printf("Digite um numero para a: ");
  scanf("%d", &a);

  printf("Digite um numero para b: ");
  scanf("%d", &b);

  printf("Digite um numero para c: ");
  scanf("%d", &c);

  if (a == b && b == c) {
    printf("a, b, c tem valores iguais");
  }

  return 0;
}
