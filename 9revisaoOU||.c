//agora com "OU"="||" que ira retorna se pelo menos um dos teste forem verdadeiro

#include <stdio.h>

int main() {
  int a, b, c;
  printf("Digite um numero para a: ");
  scanf("%d", &a);

  printf("Digite um numero para b: ");
  scanf("%d", &b);

  printf("Digite um numero para c: ");
  scanf("%d", &c);

  if (a == b || b == c || a == c) {
    printf("Pelo menos 2 tem valores iguais");
  }

  return 0;
}
