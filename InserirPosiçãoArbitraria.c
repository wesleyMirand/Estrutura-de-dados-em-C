#include <stdio.h>
#include <stdlib.h>

// Definindo a estrutura do ponto
typedef struct Ponto {
    int x;
    int y;
    struct Ponto* prox;
} Ponto;

// Função para inserir um ponto em uma posição específica da lista
void inserirNaPosicao(Ponto** LP, int posicao, int x, int y) {
    // Criando um novo ponto
    Ponto* novoPonto = (Ponto*)malloc(sizeof(Ponto));
    novoPonto->x = x;
    novoPonto->y = y;
    novoPonto->prox = NULL;

    // Caso a posição seja 0 (inserir no início)
    if (posicao == 0) {
        novoPonto->prox = *LP;
        *LP = novoPonto;
    } else {
        // Inserção em posição intermediária ou no final
        Ponto* atual = *LP;

        // Movendo para a posição anterior à desejada
        for (int i = 0; i < posicao - 1 && atual != NULL; i++) {
            atual = atual->prox;
        }

        // Verificando se a posição é válida
        if (atual != NULL) {
            novoPonto->prox = atual->prox;
            atual->prox = novoPonto;
        } else {
            printf("Posição inválida!\n");
            free(novoPonto); // Liberando a memória alocada para o novo ponto
        }
    }
}

// Função para imprimir a lista
void imprimirLista(Ponto* LP) {
    Ponto* atual = LP;

    while (atual != NULL) {
        printf("Ponto (%d, %d) -> ", atual->x, atual->y);
        atual = atual->prox;
    }

    printf("NULL\n");
}

int main() {
    // Inicializando a lista vazia
    Ponto* LP = NULL;

    // Tamanho inicial da lista
    int length = 0;

    // Inserindo pontos em posições específicas
    inserirNaPosicao(&LP, 0, 1, 1); // Inserir PONTO (1, 1) na posição 0
    length++;

    inserirNaPosicao(&LP, 1, 2, 4); // Inserir PONTO (2, 4) na posição 1
    length++;

    inserirNaPosicao(&LP, 1, 3, 9); // Inserir PONTO (3, 9) na posição 1
    length++;

    // Imprimindo a lista resultante
    imprimirLista(LP);

    // Imprimindo o tamanho da lista
    printf("Tamanho da lista: %d\n", length);

    return 0;
}
