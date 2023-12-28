#include<stdio.h>

int v[100];

int main(void) {

  for (int i = 0; i< 100; i++)
    {
      v[i] = i + 1;
    }

  int num = 500;

  int comparacoes = 0;

  int continuar = 1;

  int ini = 0;
  int fim = 99;

  while (continuar == 1)
  {
   comparacoes ++;
   int pivo = (ini + fim ) /2;
    if(v[pivo] == num) {
      printf("Elemento encontrado\n");
      continuar = 0;
    }
    else {
      if (num > v[pivo]){
        ini = pivo + 1;
      }
      else{
        fim = pivo - 1;
      }
    }

    if ( fim < ini )
    {
      printf("elemento não encontrado");
      continuar = 0;
    }
  }

  printf("\ncomparacoes: %d\n", comparacoes);
  
  
  return 0;
}
//busca nao efetiva nao encontro
