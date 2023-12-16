#include <stdio.h>
#include <stdlib.h>

struct ponto {
  float x;
  float y;
  struct ponto *prox;
};

typedef struct ponto Ponto;

Ponto *listaPontos; // aponta para o inicio da lista.

void imprime(Ponto *p) {
  if (p != NULL) {
    printf("\nPonto(%.1f,%.1f)", p->x, p->y);
    imprime(p->prox);
  }
}

int length = 0;

void addIndex(float x, float y, int index) {
  Ponto *p = (Ponto *)malloc(sizeof(Ponto)); // alocação do primeiro ponto

  p->x = x;
  p->y = y;

  if (index > length) {
    printf("Posição invalida");
  } else {
    if (index == 0) {
      p->prox = listaPontos;
      listaPontos = p;
    } else {
      Ponto *listaAux = listaPontos;
      int i = 0;
      while (i != index - 1) {
        listaAux = listaAux->prox;
        i++;
      }
      p->prox = listaAux->prox;
      listaAux->prox = p;
    }
    length++;
  }
}

int main() {

  addIndex(1, 1, 0);
  addIndex(2, 4, 1);
  addIndex(4, 16, 2);

  addIndex(1, 43, 6);
  addIndex(0, 0, 0);

  Ponto *auxLista = listaPontos;
  imprime(auxLista);

  return 0;
}
