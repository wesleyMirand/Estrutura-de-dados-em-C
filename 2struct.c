/* Agora inves de chamar a struct de pessoa, vou por um typedef pra renomar "pessoa" para "Pessoa". Ai inves de struct pessoa vai ficar só "Pessoa" e agora organizado porque nao vai tenque chamar struct pessoa. Quanto mais simples melhor. */

#include <stdio.h>

struct pessoa {
  int Years;
  float height;
};

typedef struct pessoa Pessoa;

int main() {
  Pessoa p;
  p.years = 5;
  p.height = 1.65;

  printf(" this is Years  %d height is %.2f", p.years, p.height);

  return 0;
}
