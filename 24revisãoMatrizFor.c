
//agora mudando para 3 colunas
#include <stdio.h>

int mat[2][3]; // matriz 2 x 3 e todos elementos são do tipo int.Intao são
               // 4elementos duas linha e tres colunas. 2x3= 6elementos

int main() {
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      printf("Digite um numero :");
      scanf("%d", &mat[i][j]);
    }
  }
  return 0;
}
