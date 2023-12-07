//O "while" da mais liberdade porque podemos por qualquer teste, sem ele respeitar a condição, ele não obriga incrementar nada igual o "for". Não precisa nem inicilizar, não precisa definir nada ele vai direto por teste. Ao contrario do for que tenque percorrer"Inicialização, Definição e o TESTE Incremento". O "for" é bom para percorrer estruturas lineares"Vetores, Arrays". Conseguimos percorrer ele facil com o "for", pela estrutura ser mais simples. E o "While" é bom para estruturas que não sabemos oque vai acontecer e pode acontecer a qualquer momento. E ja o "for"ja sabemos quando ele vai finalizar, porque ele depende da "Inicialização" porque ele tem um limite o teto i<4 que é "Definição" e o "TESTE Incremento" que defini quando ele vai terminar. E tambem podemos mudar os sinais de incremento do "i++" para "i+=2", vai aparecer 0, depois o 2, por fim o 1 e o 3 desaparace. Porque a variavel começou do 0, ela era menor que 4 e executo.Então a var i é 0 e na proxima rodada "I+=2" ela foi encrementada em não em "i++ que é 1 em 1" e sim em "I+=2 -> 2 em 2"o i é igual a ele mesmo + "2""i=i+2" o i vai ser igual a "+ 2".Começa em zero soma em dois e ela vai pra "2", soma "+2" vai pra "4", ai ja não bate mais o teste.

#include <stdio.h>

int main() {

  printf("\n\nLaço FOR\n\n");

  for (int i = 0; i < 4; i += 2) {
    printf("\nA variavel i é : %d\n", i);
  }

  return 0;
}
