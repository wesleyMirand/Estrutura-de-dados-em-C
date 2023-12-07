
//Estruturas Condicionais, que vão desviar a estrutura do codigo em c, estrutura de seleção em c com if"SE", vericar certa condição, depois se for verdadeira vai entrar no bloco de codigo da chave{}if e caso seja falsa vai entrar no bloco de codigo do else"SE NÃO" {}.

#include <stdio.h>

int main() {
  int a;

  printf("digite um numero:");
  scanf("%d", &a);

  if (a == 0) // == comparando se o a é igual a 0
  {
    printf("A var 'a' é 0");
  } else // se não
  {
    printf("A var 'a' é diferente de 0");
  }
  return 0;
}
