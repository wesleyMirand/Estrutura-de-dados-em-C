//Loja na pratica

#include <stdio.h>
#include <stdlib.h>

struct celulartec {
  char modelo; // qual o modelo do celular
  struct celulartec *prox;
};

typedef struct celulartec Celulartec;

Celulartec *bateria;

void add(char modelo) {
  Celulartec *p = (Celulartec *)malloc(sizeof(Celulartec));
  p->modelo = modelo;
  p->prox = bateria;
  bateria = p;
}

void rem() {
  if (bateria == NULL) {
    printf("Bateria Vazia");
  } else {
    bateria = bateria->prox;
  }
}

void imprime(Celulartec *p) {
  if (p != NULL) {
    printf("\nMarca do Celular: %c\n", p->modelo);
    imprime(p->prox);
  }
}

int main() {

  add('e');
  add('l');
  add('l');
  add('p');
  add('a'); // o ultimo no topo da fila

  Celulartec *bateriaAux = bateria;
  imprime(bateriaAux);

  return 0;
}
