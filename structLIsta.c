
//Agora para exibir as var por o printf, para acessar os valores do ponto que foi colocado dinamicamente. Se a memoria fosse espalhadas teriamos varias struct por ela.Alocando-as em tempo de execução e nao previamente como vetor. E na memoria os ponteiros que apontam um para o outro. */

#include <stdio.h>
#include <stdlib.h>

Struct ponto {
  float x;
  float y;
};

typedef struct ponto Ponto;

int main(void) {
  Ponto *p = (Ponto *)malloc(sizeof(Ponto));
  p->x = 1;
  p->y = 5;
  return 0;
}
