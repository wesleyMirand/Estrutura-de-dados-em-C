//Executando o laço while e for junto.O laço while foi mudando a variavel de 0 até 6 porque o teste era até que ela fosse menor que , aparti do momento que ela chega em 9 ela ja não é menor que 9, é igual ai ja não vale mais. E no for ela inicializa no zero vai ser executada até que seja menor que 4 e o valor dela se torna incrementado a cada execução. No 3 ela para por ser menor que 4, vira igual ai para porque ja não vale mais o laço.Essas são as principais duas forma de laço de repetição.

#include <stdio.h>

int main() {
  printf("\n Laço while \n");

  int a = 0;

  while (a < 20) {
    printf("\nVariavel 'a' é: %d\n", a);
    a++;
  }

  printf("\n\nLaço FOR\n\n");

  for (int i = 0; i < 8; i++) {
    printf("\nA variavel i é : %d\n", i);
  }

  return 0;
}
