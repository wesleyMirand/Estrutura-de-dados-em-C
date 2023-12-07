
#include <stdio.h>

int main() {
  int a;

  printf("digite um numero:");
  scanf("%d", &a);

  if (a != 0) {
    printf("A var 'a' é diferente de 0");
  } else {
    printf("A var 'a' é 0");
  }
  return 0;
}
