#include <stdio.h>

int main() {
  printf("\n Laço while \n");

  int a = 0;

  while (a < 10) {
    printf("\n A variavel  escolhida é 'a': %d\n", a);
    a++;
  }

  printf("\n\nLaço FOR\n\n");

  for (int i = 0; i < 8; i++) {
    printf("\nA variavel i é : %d\n", i);
  }

  return 0;
}
