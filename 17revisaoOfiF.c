//Agora vamos trocar a var e deixar ela como se fosse uma operação"op" pro usuario escolher e o resultado vai ser o "res". Vamos usar um estrutura condicional"IF" (op == 1), if (op == 2). Para verificar qual operação vai ser escolhida pelo usuario entre soma ou subtracao, vai ser mostrado o resultado com printf("O resultado é:%d\n", res).

#include <stdio.h>

int main() {
  int n1, n2, op, res;

  printf("digite um valor para n1:");
  scanf("%d", &n1);

  printf("digite um valor para n2:");
  scanf("%d", &n2);

  printf("Digite qual operacao vai ser usado:\n 1-Adição \n 2-subtração \n ");
  scanf("%d", &op);

  if (op == 1) {
    res = n1 + n2;
  }
  if (op == 2) {
    res = n1 - n2;
  }

  printf("O resultado é:%d\n", res);

  return 0;
}
