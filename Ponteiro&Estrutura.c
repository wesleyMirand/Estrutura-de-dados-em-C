/* E agora pra melhorar o codigo? Usaremos ponteiro dentro da estrutura ponto, o ponto vai apontar para o proximo. Cada estrutura ponto vai apontar para outro ponto que será a proxima estrutura.
Cada ponto alem de ter Struct ponto {
  float x; O X
  float y;  O Y
vai ter um ponteiro apontando para o proximo. Resumindo o ponteiro sempre apontando para o proximo " struct ponto *prox; "; */

#include <stdio.h>
#include <stdlib.h>

Struct ponto {
  float x;
  float y;
  struct ponto *prox;
};

typedef struct ponto Ponto;

int main(void) {
  Ponto *p = (Ponto *)malloc(sizeof(Ponto));//A estrutra apontando para proxima estrutura.
  p->x = 1;
  p->y = 5;

  Ponto *p1 = (Ponto *)malloc(sizeof(Ponto)); //outra estrutura 
  p2->x = 3;
  p2->y = 9;

  Ponto *p2 = (Ponto *)malloc(sizeof(Ponto)); //outra estrutura 
  p1->x = 4;
  p1->y = 7; //Cada ponteiro aponta pro proximo sem voltar atras.

  p -> prox = p1; //p apronta pra p1 
  p1 ->prox =  p2; //p1 aponta pra NULL
  p2 ->prox = NULL; //encadeamento de 3ponteiro 
  return 0;
}
