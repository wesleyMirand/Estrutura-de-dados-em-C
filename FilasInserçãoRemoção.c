// implementação das funcoes as filas, filas tem lugar especifico, frente é oque
// vai ser removido e o ultimo emplementado.
#include <stdio.h>
#include <stdlib.h>

struct pessoa {
  int senha;
  struct pessoa *prox;
};

typedef struct pessoa Pessoa;
Pessoa *fila;

void add(int senha) {
  Pessoa *p = (Pessoa *)malloc(sizeof(Pessoa));
  p->senha = senha;
  p->prox = NULL;

  if (fila == NULL) {
    fila = p;
  } else {
    Pessoa *filaAux = fila;
    while (filaAux->prox !=
           NULL) { // quando chega no null, ja sei que chego no final.
      filaAux = filaAux->prox;
    }
    filaAux->prox = p;
  }
}

void imprime(Pessoa *f) {
  if (f != NULL) {
    printf("\nSenha da Pessoa: %d\n", f->senha);
    imprime(f->prox);
  }
}

int main() {

  add(5);            // todo elemento que eu inserir ta indo pro final da fila.
  add(8);            // 8 tinha agora vai pro 32
  add(326555555555); // 32 tinha agora vai pro 52
  add(52222222222);  // 52 tinha proximo

  Pessoa *filaAux = fila;
  imprime(filaAux);

  return 0;
}
