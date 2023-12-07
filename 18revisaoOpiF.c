17
//Agora vamos usar funcoes especificas tipo "int soma" bem no começo, que é um tipo de retorno. Usei o "int a e o int b" e para return o resultado usei o "s". A var s tenque ser inteira porque o tipo de retorno vai ser int. Ai iremos la para o if e modificar as operação soma para , res = soma(n1, n2), onde o res vai ser "s", n1"a", n2"b" e assim o mesmo vai acontecer na sub.

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

  printf("digite um valor:");
  scanf("%d", &n1);

  printf("digite um valor:");
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

  return 0;
}
