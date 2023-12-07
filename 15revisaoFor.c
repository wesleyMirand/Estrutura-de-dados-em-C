//Agora se colocar na definição o 5, ele vai aparecer até o 4 por ser de 2 em 2.
#include <stdio.h>

int main() {

  printf("\n\nLaço FOR\n\n");

  for (int i = 0; i < 5; i += 2) {
    printf("\nA variavel i é : %d\n", i);
  }

  return 0;
}
