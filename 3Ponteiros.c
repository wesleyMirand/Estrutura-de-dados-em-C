//Agora para exibir as var por o printf, para acessar os valores do ponto que foi colocado dinamicamente.

#include <stdio.h>
#include <stdlib.h> //Essa biblioteca tem o malloc que vamos utilizar

struct ponto {
  float x;
  float y;
};

typedef struct ponto Ponto;

int main() {
  Ponto *p = (Ponto *)malloc(sizeof(Ponto));
  p->x = 1;
  p->y = 5;
  printf("Ponto = (%.1f,%.1f)", p->x, p->y);
  return 0;
}
