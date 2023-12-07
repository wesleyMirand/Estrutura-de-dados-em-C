/* As structs, sao estruturas que vamos criar, novos tipo de dados e armazenar informacoes para depois alocar de forma logicar e fisica na memoria. Oque são? as structs  conseguem agrupar dados na estrutura e criar novos dados. Assim como objeto ela vai ter atributos que são as variaveis, ela nao consegue usar funcoes nem metodos. Mais conseguimos por informacoes, tipo criar uma var para apresentar uma pessoa, só com os tipo que nós temos não da, float, char, int. Porém não da para criar uma struct"pessoa", tipo armazenar altura e idade. Irei tenque criar uma struct expecifica. Criar struct pessoa, entre a chave as var pra representa a pessoa. Criando uma strutura de dados chamada struct pessoa, temos o int idade e float altura. E para atribui valores, criar uma variavel pessoa p, só que ela não é int double char, dados que criamos que do tipo struct pessoa.e para exibir "printf("nadndnadnadnad: %.d", p.idade); " e ("nadndnadnadnad: %..2f", p.altura); . A struct criada consegue agrupar diversas var dentro dela. E normalmente usamos uma struct para criar um tipo de dado novo , agrupar informacoes de um entidade.*/

#include <stdio.h>

struct pessoa {
  int idade;
  float altura;
};

int main() {
  struct pessoa p;
  p.idade = 5;
  p.altura = 1.65;

  printf("A idade da pessoa é %d e a altura é %.2f", p.idade, p.altura);

  return 0;
}
