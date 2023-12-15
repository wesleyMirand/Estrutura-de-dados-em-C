#include <stdio.h>

// Função recursiva para calcular a potência de um número
int potencia(int base, int ep) {
  if (ep == 1) {
    return base;
  }
  return base * potencia(base, ep - 1);
}

int main() {
  // Chamada inicial: potencia(2, 4)
  // A expressão abaixo representa a expansão da recursão.
  int v = 2 * 2 * 2 * 2;  // Resultado esperado: 16
  printf("%d", v);
  return 0;
}

/* 
Vamos revisitar o código e explicá-lo novamente, desta vez incluindo a expressão completa na chamada da função main:

#include <stdio.h>

// Função recursiva para calcular a potência de um número
int potencia(int base, int ep) {
  if (ep == 1) {
    return base;
  }
  return base * potencia(base, ep - 1);
}

int main() {
  // Chamada inicial: potencia(2, 4)
  // A expressão abaixo representa a expansão da recursão.
  int v = 2 * 2 * 2 * 2;  // Resultado esperado: 16
  printf("%d", v);
  return 0;
}

Chamada Inicial:

main chama potencia(2, 4).
A expressão completa é int v = 2 * 2 * 2 * 2;.
Função potencia:

Verifica se ep é igual a 1.

base            ep
2                4
2                3
2                2
2                1

Como ep é 4, não entra no if e retorna base * potencia(base, ep - 1).
Nova Chamada:

potencia(2, 3) - A expressão agora é 2 * potencia(2, 2).
Nova Chamada:

potencia(2, 2) - A expressão agora é 2 * potencia(2, 1).
Nova Chamada:

potencia(2, 1) - Agora entra no if e retorna a base (2).
Retorno nas Chamadas Anteriores:

Substituindo nas expressões anteriores:
potencia(2, 2) retorna 2 * 2.
potencia(2, 3) retorna 2 * 2 * 2.
potencia(2, 4) retorna 2 * 2 * 2 * 2.
Resultado Final:

main agora é equivalente a int v = 2 * 2 * 2 * 2; que é 16.
Portanto, a saída do programa é 16, representando corretamente 
2
4
2 
4
 . */
