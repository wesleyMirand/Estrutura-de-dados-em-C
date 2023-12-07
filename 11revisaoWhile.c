//Laço de Repetição, laço while enquanto um condição for verdadeira ele vai executar o laço, por a var ser a=0, ela nunca vai ser alterada. E pra mudar isso vamos usar o A++= a = a + 1 . Então o zero quando executar o valor a++, ele vai passar a ter 1 de forma crescente. 1 é menor que 5?SIM, continuar a++...Funcionamento basico do "laço While"

#include <stdio.h>

int main() {
  printf("\n Laço while \n");

  int a = 0;

  while (a < 5) {
    printf("\nVariavel 'a' é: %d\n", a);
    a++;
  }

  return 0;
}
