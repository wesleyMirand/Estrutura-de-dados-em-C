//Funcoes, as funcoes auxiliam para deixar o codigo mais morderno e dividir as tarefas de forma mais organizada para reutilizar no futuro. Assim não deixa tudo na funcao principal e conseguimos dividir para criar novas funcoes organizadas de forma modular dentro do código.Criando um funcao pensando na soma  de um valor. Vamos pegar dois valores e criar duas var int e somar elas e mostrar na tela o resultado.

#include <stdio.h>

int main() {
  int n1, n2, op;

  printf("digite um valor:");
  scanf("%d", &n1);

  printf("digite um valor:");
  scanf("%d", &n2);

  op = n1 + n2;

  printf("O resultado da some é:%d\n", op);

  return 0;
}
