//Vamos atribuir agora um vetor float e vamos chamalo de "v1" com 3 elementos "[3]". E digitar para ler os valores. Vamos usar o laço de repetição for. vamos criar uma var que vai inicializar em 0  "int i= 0;" e agora vamos fazer o teste o i tenque ser menor que 3"i< 3;" que vai ir no maximo até dois pq respeita o limite do 3. Ai por fim vou de incremento i++ pulando de posição em posição.Vou mandar digita o valor e com o scanf vou puxar a "var do armazenamento tipo float" com o "endereco v1" e "posição[i]". E assim por o mais um "FOR" embaixo. Todos os elemento do "v1" são "float" e o "%d" eu vou trocar pelo "i", sempre na ordem o primeri "[%d]" com a primeira var = "i" e o segundo "%f" com o segundo "v1[i]". Vou digitar o valor 5 que vai ser armazenado na posição "0" do v1no indice 0 e ai em diante...O vetor vai ter um tipo, assim com a var e vai ter um nome e entre colchetes a quantidade elemento que ele vai armazenar.Seria uma sequencia de variaveis um do lado da outra na memoria. Se chama estruturas lineares dentro do c.

#include <stdio.h>

int v[4];

float v1[3];

int main() {
  v[0] = 45; // armazenando valor na var
  v[1] = 78; // indice 1 valor 78
  v[2] = 9;
  v[3] = 5;

  for (int i = 0; i < 3; i++) {
    printf("Digite  um valor:");
    scanf("%f", &v1[i]);
  }

  for (int i = 0; i < 3; i++) {
    printf("\nO valor de v1[%d] = %.1f", i, v1[i]);
  }

  return 0;
}
