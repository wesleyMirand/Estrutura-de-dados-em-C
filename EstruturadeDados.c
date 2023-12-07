/* Alocação dinamica de estrutura de dados, para poder inicializar em tempo de execução.A diferenca em ter var estatica no incio do programa e sobre demanda durante o programa. Iniciar com um problema e dar continuidade nele com lista, pilhas... Iremos conseguir criar estrutura de dados mais elaboradas e alocadas dinamicamente. Alocar quantidade grande de estruturas para armazena pontos no espaço x e y. E criar um typedef pra chamar a struct de PONTO e por valores nele.

#include <stdio.h>

struct ponto{
float x;
float y;
};
typedef struct ponto Ponto;
int main() {
  Ponto p;
  p.x = 1;
  p.y = 5;

  return 0;
}
