/*matrizes vetores com mais dimensoes. Na matriz temos varias posicoes, multidimensao, como se fosse uma tabela, planilha. vou ter um indice pro lado---- assim e um indice | descendo. tipo 0 1 2 .
                                         |                1
                                                          2
enquanto o i for 0 vou executar o j dor for que vai executar duas vezes, enquanto for zero e enquanto for 1 e quando chegar em 2 ele ja para. Ai ele volta no i e o i vai passar a ser 1. Vai entrar de novo no for e executar. Pra cada vez que executar o primeiro for, ele executa todo o outro for. /*

#include <stdio.h>

int mat[2][2]; // matriz 2 x 2 e todos elementos são do tipo int.Intao são
               // 4elementos duas linha e tres colunas. 2x2= 4elementos

int main() {
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      printf("Digite um numero :");
      scanf("%d", &mat[i][j]);
    }
  }
  return 0;
}
