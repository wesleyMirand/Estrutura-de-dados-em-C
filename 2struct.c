/* Agora inves de chamar a struct de pessoa, vou por um typedef pra renomar "pessoa" para "Pessoa". Ai inves de struct pessoa vai ficar só "Pessoa" e agora organizado porque nao vai tenque chamar struct pessoa. Quanto mais simples melhor. */

#include <stdio.h>

struct pessoa {
  int idade;
  float altura;
};

typedef struct pessoa Pessoa;

int main() {
  Pessoa p;
  p.idade = 5;
  p.altura = 1.65;

  printf("A idade da pessoa é %d e a altura é %.2f", p.idade, p.altura);

  return 0;
}
