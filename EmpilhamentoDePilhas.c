#include <stdio.h>
#include <stdlib.h>

// Definindo nova estrutura
struct Node {
  int data;
  struct Node *next;
};

// Definindo a estrutura
struct Stack {
  struct Node *top;
};

// Funcao para criar novo no
struct Node *createNode(int data) {
  struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
  newNode->data = data;
  newNode->next = NULL;
  return newNode;
}

// Funcao para inicializar a pilha
void initializeStack(struct Stack *stack) { stack->top = NULL; }

// Funcao para verificar se a pilha esta vazia
int isEmpty(struct Stack *stack) { return (stack->top == NULL); }

// Funcao para empilhar elemento
void push(struct Stack *stack, int data) {
  struct Node *newNode = createNode(data);
  newNode->next = stack->top;
  stack->top = newNode;
}

// Funcao para desempilhar elemento
int pop(struct Stack *stack) {
  if (isEmpty(stack)) {
    printf("Erro: pilha vazia\n");
    return -1; // valor invalido para indicar erro
  }

  int data = stack->top->data;
  struct Node *temp = stack->top;
  stack->top = stack->top->next;
  free(temp);

  return data;
}

// Funcao para imprimir a pilha
void printStack(struct Stack *stack) {
  if (isEmpty(stack)) {
    printf("A pilha esta vazia.\n");
    return;
  }

  struct Node *current = stack->top;
  printf("Elementos da pilha:\n");

  while (current != NULL) {
    printf("%d\n", current->data);
    current = current->next;
  }
}

// Funcao principal
int main() {
  struct Stack stack;
  initializeStack(&stack);

  push(&stack, 10);
  push(&stack, 20);
  push(&stack, 30);

  printf("Pilha inicial:\n");
  printStack(&stack);

  int removedElement = pop(&stack);
  printf("\nElemento removido: %d\n", removedElement);

  printf("Pilha após remoção:\n");
  printStack(&stack);

  return 0;
}
