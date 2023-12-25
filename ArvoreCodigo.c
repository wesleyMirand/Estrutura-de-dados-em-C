#include <stdio.h>
#include <stdlib.h>

struct Node {
  int key;
  struct Node *left;
  struct Node *right;
};

struct Node *createNode(int key) {
  struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
  newNode->key = key;
  newNode->left = newNode->right = NULL;
  return newNode;
}

struct Node *insert(struct Node *root, int key) {
  if (root == NULL) {
    return createNode(key);
  }

  if (key < root->key) {
    root->left = insert(root->left, key);
  } else if (key > root->key) {
    root->right = insert(root->right, key);
  }

  return root;
}

void inorderTraversal(struct Node *root) {
  if (root != NULL) {
    inorderTraversal(root->left);
    printf("%d ", root->key);
    inorderTraversal(root->right);
  }
}

int main() {
  struct Node *root = NULL;

  root = insert(root, 5);
  insert(root, 2);
  insert(root, 8);
  insert(root, 1);
  insert(root, 4);

  printf("Inorder Traversal: ");
  inorderTraversal(root);

  return 0;
}
