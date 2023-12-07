//Agora iremos usar o laço "FOR", que é outro laço de repetição com 3 componentes principais. 1-inicializa var, 2-teste, 3-incremento. Ele faz oque o laço while faz, porém ja contem todas condiçoes dentro dele. Ele ja tem um definição de quando o laço vai acabar, pode ser utilizado também como sem definição para acabar. E ja o for é definido.1-Inicializando definindo a Var(int i=0;) valor inteiro,2- teste(int i=0; i<4;) verificando se o i é menor que 4,3-Incremento(int i=0; i<4; i++). Significa que vou ter um var inteira que inicia pelo 0, o laço vai se repetir enquanto for menor que 4 e cada vez que for executado iremos incrementa o valor 1"i++". Ele vai executar o printf de 1 em 1 até dar 4.

#include <stdio.h>

int main() {

  printf("\n\nLaço FOR\n\n");

  for (int i = 0; i < 4; i++) {
    printf("\nA variavel i é : %d\n", i);
  }

  return 0;
}
