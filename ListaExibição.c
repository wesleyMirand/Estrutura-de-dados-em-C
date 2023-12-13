/* Conforme o último código de lista, criamos uma estrutura básica de listas elementares de dados com alocação dinâmica, usando a função malloc e ponteiros para armazenar os endereços dentro de cada ponto.

Realizamos a exibição manualmente com ponteiros prox prox prox. Agora, o objetivo é criar uma função responsável por exibir os pontos na lista sem a necessidade de intervenção manual.

1. Criamos uma função void chamada "imprime()" sem parâmetros.
2. Percorremos elemento a elemento na lista, utilizando ponteiros prox prox, para exibir todos os elementos.
3. Introduzimos um ponteiro para apontar para o próximo elemento. Não podemos usar o "LISTA PONTO DA AULA PASSADA" diretamente, pois ele começa apontando para o primeiro da lista, e não queremos perder a referência.
4. Solução: Criamos um ponteiro novo Ponto *auxLista, igual à lista ponto. Criamos outro ponteiro que apontará para o mesmo local que a lista ponto (podemos trocar, mas vamos mantê-lo).
5. Utilizamos um loop while enquanto "auxLista" for diferente de NULL. Quando entra em NULL, "auxLista" é igual a "listaPonto". A lista ponto aponta para o início sem elemento, então "auxLista" também aponta para NULL.
6. Verificamos sempre, ao usar o while, se "auxLista" é diferente de NULL. Se for diferente, há um elemento ponto alocado ali. Imprimimos com printf("Ponto(%.1f, %.1f)", auxLista->x, auxLista->y).
7. Atualizamos "auxLista" para apontar para o próximo elemento usando auxLista->prox.
8. Repetimos o processo até encontrar um elemento NULL.
9. Adicionamos "imprime();" no final do código para chamar a função e exibir os pontos.

Resumindo, criamos um "auxLista" para não mexer na lista pontos. O auxiliar pode apontar para onde quisermos, pois fica preservado, e não precisamos modificar para onde ele vai apontar. Assim, não perdemos a referência do primeiro elemento. Em resumo, apontamos sempre para o próximo, exibimos o elemento atual e avançamos até encontrar o NULL, quando não há mais o que fazer.*/

#include <stdio.h>
#include <stdlib.h>

struct ponto {
  float x;
  float y;
  struct ponto *prox;
};

typedef struct ponto Ponto;

Ponto *
    listaPontos; // Vai ser o ponteiro que vai apontar para o primeiro da lista.

void add(float x, float y) {
  Ponto *p = (Ponto *)malloc(sizeof(Ponto));
  p->x = x;
  p->y = y;
  p->prox = listaPontos; // aponta para lista pontos.
  listaPontos = p;       // Novo primeiro elemento.
}

void imprime() {
  Ponto *auxLista = listaPontos;
  while (auxLista != NULL) {
    printf("\n Ponto(%.1f, %.1f)", auxLista->x, auxLista->y);
    auxLista = auxLista->prox;
  }
}

int main() {

  add(1, 5);
  add(2, 7);
  add(5, 3);

  imprime();

  return 0;
}
