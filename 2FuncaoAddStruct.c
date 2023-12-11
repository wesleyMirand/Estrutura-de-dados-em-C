
/* Agora vamos criar o add(2, 7)  O x vai receber 2 e o y 7 que sao os parametro e vou criar  uma nova estrutura e ponto. O nome vai ser p tambem "P[x=2, y=7, prox----]---> vai apontar para o prox da estrutura passada "P[prox, x=1, y=5] e a lista pontos vai apontar para "P"meu novo ponto que é P[x=2, y=7, prox----] .
organizando : P[prox, x=1, y=5] = aponta pra NULL E P[x=2, y=7, prox---->] vai apontar para o primeiro p =P[prox, x=1, y=5] e *LP meu novo ponteiro lista ponto vai apontar para a ultima caixa P[x=2, y=7, prox---->;  

*LP -> P[x=2, y=7, prox---->] ->   P[prox, x=1, y=5] */

#include <stdio.h>
#include <stdlib.h>

struct ponto {
  float x;
  float y;
  struct ponto *prox;
};

typedef struct ponto Ponto;

Ponto *listaPontos; // Vai ser o ponteiro que vai apontar para o primeiro da lista.

void add(float x, float y) {
  Ponto *p = (Ponto *) malloc(sizeof(Ponto));
  p->x = x;
  p->y = y;
  p-> prox = listaPontos;// aponta para lista pontos.
  listaPontos = p; //Novo primeiro elemento.
}

int main(void) {
  add(1, 5);
  add(2, 7);
  return 0;
}


/* E agora criando um novo, vai acontecer a mesma coisa. Sempre vai ser o novo elemento pro proximo elemento. Estrutura dinamica de lista com a adição no inicio e a dinamica pq eu adiciono em tempo de execução.Não sei os ponto que vou adicionar.
 E agora eu sabendo os pontos que vou adicionar, 100 elementos vou fazer um while ou for pedindo pro usuario digitar mais um ponto. Sempre vai ser assim porque o while vai sempre pedir algo. Se o usuario quiser outro da pra ler, adicionar a pontos e continuar para sempre adicionando pontos. Rotação dinamica. Não sei quantos ponto quero alocar, estou em tempo de execuçao. Vou adicionando e ponto proximo elemento da lista.
 Se eu quiser adicionar "final" irei percorrer toda a lista até chegar no ultimo elemento.  O ultimo elemento sempre vai ser o prox apontando para mim. Para chegar no elemento que o prox chega no NULL, chegamos no ultimo elemento ai vou fazer o NULL aponta para um proximo elemento. Aplicamos funcao, alocação, estruturas, ponteiros.* /
