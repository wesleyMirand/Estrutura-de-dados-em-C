/*Agora após por a biblioteca lib para usar o malloc, ainda falta a conversao da locacao "Ponto" para o nosso "ponteiro(*PONTO)", e agora acessar os valores do " x e y " na estrutura e inves de "p.x e p.y" vamosa usar a setinha "p->x = 1; p-> y = 5;" criamos espaco alocados para armazenar as var que estao dentro da estrutura. */

#include <stdio.h>
#include <stdlib.h> //Essa biblioteca tem o malloc que vamos utilizar

struct ponto
{
float x;
float y;
};
typedef struct ponto Ponto;

int main() {
  Ponto *p = (Ponto*) malloc(sizeof(Ponto));
  p-> x = 1;
  p-> y = 5;
  
  return 0;
}
