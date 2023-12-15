
/*recursão, primeiro criar uma funcao, e ela vai ter um criterio de parada. Ela é um funcao dentro dela mesmo. Criar funcao "int potencia",  `{} abrir as chaves e dentro da chaves chamar a funcao dela mesmo  { pontencia (); }. Algo chamado dentro da funcao. Todo codigo dessa funcao vai ser chamado dele mesmo. Pontencia definir os valores da base, elevado ao espoente(int base, int ep). No int main: int v = pontencia de 2 elevado a (2,4); que é 16. la encima retorna a potencia a  pontencia sendo a base  "return base*potencia(), da funcao passando a base e o ep-1, "return base*potencia(base, ep-1);. Ou seja quando eu chamar a funcao  vai passar o 2 x 2 e vai chamar a funcao pontencia passando o 2 para 4. vai fazer a base vezes potencia. Como eu paro a base ? quando o if(ep==1){ return base}.

base            ep
2                4
2                3
2                2
2                1

2*2*2*2 = 16

*/

#include <stdio.h>

int potencia(int base, int ep) {
  if (ep == 1) {
    return base;
  }
  return base * potencia(base, ep - 1);
}

int main() {
  int v = potencia(2, 4);
  printf("%d", v);

  return 0;
}

