
/* Vou  criar uma nova funcao void add(), add vou por float x e float y. Tem a lista ponto inicia como null, so crie os ponteiros, vou criar o add(1, 5), vai passar pela funcao float x e float y, vai alocar a estrutura no Ponto *p = (Ponto*) malloc(sizeof(Ponto)) e vai ter no inicio o *p que aponta pra ela. o x do ponteiro vai apontar pra x e y a mesma coisa. E o p -> prox = listaPontos; é aonde acontece a magica. exemplo foi criado o uma caixa com P[x, y], o x= 1 e o y =5, a ideia de execução. Temos o PROX, que aponta pra lista que esta a pontando que no caso a *lista ponto= NULL.  Significa que "P[x=1, y=5, prox----]--->NULL, proximo vai apontar para NULL. E a lista ponto embaixo esta apontando para P "P[x=1, y=5, prox----]. */

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

  return 0;
}
