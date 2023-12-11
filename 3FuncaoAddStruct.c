
/* VOu adicionar add(5,3); e  e vou pedir x o prox que vai ser o 5 que acabamos de criar e se colocarmos outro prox vai aparecer 2 e outro proximo 1. */
#include <stdio.h>
#include <stdlib.h>

struct ponto {
  float x;
  float y;
  struct ponto *prox;
};

typedef struct ponto Ponto;

Ponto *
    listaPontos; // Vai ser o ponteiro que vai apontar para o primeiro da lista.

void add(float x, float y) {
  Ponto *p = (Ponto *)malloc(sizeof(Ponto));
  p->x = x;
  p->y = y;
  p->prox = listaPontos; // aponta para lista pontos.
  listaPontos = p;       // Novo primeiro elemento.
}

int main(void) {
  add(1, 5);
  add(2, 7);
  add(5, 3);

  printf("%.0f", listaPontos->prox->prox->x);
  return 0;
}

// e se eu fizer printf("%.0f", listaPontos->prox->prox->prox->x) , não vai aparecer nada porque nao chegou no fim. não foi alocada no fim
