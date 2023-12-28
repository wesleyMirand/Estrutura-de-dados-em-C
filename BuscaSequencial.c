#include<stdio.h>

int v [10] = {4, 8, 2, 56, 34, 7, 98, 1, 25, 10};

int main(void) {

  int num = 10;

  for (int i = 0; i< 10; i++)
    
  {
    if(v[i] == num) 
    {
      printf("elemento encontrado posiçao: %d\n", i);
    }
  }
  
  return 0;
}

/*fizemos 10 comparçoes ate achar, se fosse 200 elemento iamos fazer muitas comparações, custo elevado, implementação simples laço
for estrutura if condicional e ta feito porem não é pratica! E da pra melhorar usando a busca binaria.Sempre se 
pergunta qual  seria a melhor solução entre sequencial ou binaria.Sequencia é pra quando o tempo ou limite nao é urgente ou grande.*/
