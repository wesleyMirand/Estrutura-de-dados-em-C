/*Agora vamos trabalhar com ponteiros, recurso da linguagem c guarda var struct armazenada na memoria ram, ajuda alocar na ram e salvar o endereço delas. Criar uma var val e criar um ponteiro do mesmo tipo int, para apontar na var. Criando um ponteiro int chamado de  *p. E pra apontar na val, pegar o ponteiro "T" e dizer que ele é igual ao endereco val. Acessar o valor da val por meio do ponteiro. 'p' é : %d\n", *p); Fazendo o apontamento do *p, igual ao endereço &val."é o endereço->&". O valor apontado por p é:, ai acessamos o valor de onde ta apontando com *p. Criamos um ponteiro apontando pra uma variavel sendo que podia acessar a var direto. A diferença é que o "val" ja foi alocado no inicio do programa e quando precisamos alocar informação dinamicamente sobre demanda e nao sabemos a quantidade que vamos alocar, ai os ponteiros vao ser necessario. A diferenca é que as var que fiz sao alocada na memoria ja existem e quando precisamos criar dinamica sob demanda vao ser alocada na memoria RIP ai vamos precisar desses ponteiros nao tem como fazer sem ponteiro.*/

#include <stdio.h>
int *p;
int val = 5;

int main() {
  p = &val;
  printf("O valor apontado por 'p' é : %d\n", *p);

  return 0;
}
