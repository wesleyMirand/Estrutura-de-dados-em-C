#include <stdio.h>
#include <stdlib.h>

struct prato {
  char cor; // qual e a cor do prato
  struct prato *prox;
};

typedef struct prato Prato;

Prato *pilha;

void add(char cor) {
  Prato *p = (Prato *)malloc(sizeof(Prato));
  p->cor = cor;
  p->prox = pilha;
  pilha = p;
}

void rem() {
  if (pilha == NULL) {
    printf("Pilha Vazia");
  } else {
    pilha = pilha->prox;
  }
}

void imprime(Prato *p) {
  if (p != NULL) {
    printf("\nCor do prato: %c\n", p->cor);
    imprime(p->prox);
  }
}

int main() {

  add('g');
  add('r');
  add('e');
  add('n'); // o ultimo no topo da fila

  rem();// o N sumiu
  rem();//remove o e
  rem();//remove o r
  rem();//remove o g
  rem();//remove o tudo pilha vazia

  Prato *pilhaAux = pilha;
  imprime(pilhaAux);

  return 0;
}
