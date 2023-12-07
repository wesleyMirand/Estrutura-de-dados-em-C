//E agora invez do programa termina iremos usar um laço de repetição "while", para programar não termine. E agora iriamos usar o while(true) para fazer o teste e como tem o true iria sempre ser verdadeiro mais não da pra passar o true pra baixo. Então vamos criar uma var "int teste = 0;"e vamos por no "while(teste==0)" e verificar se o teste é igual a zero e se for vamos sempre executar o codigo inteiro sem fim. Iremos copiar o codigo todo e por dentro do while e por fim não vai ter final após uma operação ele vai continuar mandando fazer as operacoes.

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

  int teste = 0;

  while (teste == 0) {
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
  }

  return 0;
}
