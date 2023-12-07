//Diferente do while que nao termina nunca, o for ja tem final, ele inicializa, faz o teste e termina incrementando até chega o fim o e o resultado for igual. Agora vamos melhorar e criaremos uma pequena calculadora de soma e subtracao, "int teste" vai ser "int fim"e la embaixo no final do codigo irei dar a opção parar ou continuar.E usar o scanf para puxar a variavel "fim".

#include <stdio.h>

int soma(int a, int b) {
  int s = a + b;
  return s;
}

int sub(int a, int b) {
  int s = a - b;
  return s;
}

int main() {
  int n1, n2, op, res;

  int fim = 0;

  while (fim == 0) {
    printf("\ndigite um valor:");
    scanf("%d", &n1);

    printf("\ndigite um valor:");
    scanf("%d", &n2);

    printf("Digite qual operacao vai ser usado:\n 1-Adição \n 2-Subtração \n ");
    scanf("%d", &op);

    if (op == 1) {
      res = soma(n1, n2);
    }
    if (op == 2) {
      res = sub(n1, n2);
    }

    printf("O resultado é:%d\n", res);

    printf("\n0-contunuar\n1 -parar\n");
    scanf("%d", &fim);
  }

  return 0;
}
