/*Agora vamos mudar e vamos usar alocação dinamica e trabalhar com ponteiros. Remover o p.x e p.y e inves usar Ponto * p,um ponteiro que vai apontar para uma estrutura alocada dinamicamente do tipo Ponto. E vamos usar o MALLOC que vai alocar dinamicamente um espaco na memoria. E quando usar o malloc a informação "PONTO"  que vai usar o ponteiro "* p" para apontar pra ela.Ela é alocada na memoria RIP"memoria livre" estrutura em execução. O "Malloc()" entre parentes porque ele é um funcao e vamos por dentro o tamanho que iremos alocar.E para saber o tamanho usamos a funcao "sizeof ()" e dentro do parenteses vamos poder o tipo de dado que vamos alocar que no caso é o "PONTO". O malloc ta dizendo que a declaracao foi implicita nao tem a biblioteca para usar.*/

#include <stdio.h>

struct ponto
{
float x;
float y;
};
typedef struct ponto Ponto;

int main() {
  Ponto *p = malloc (sizeof(Ponto));
  return 0;
}
