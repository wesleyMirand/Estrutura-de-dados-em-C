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


void imprime()
{
  Ponto *auxLista = listaPontos;
  while(auxlista!= NULL)
    {
      
    }
}
int main(void) {
  add(1, 5);
  add(2, 7);
  add(5, 3);

  printf("%.0f", listaPontos->prox->prox->x);
  return 0;
}
