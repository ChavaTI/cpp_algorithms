#ifndef BINARY_SEARCH_TREE
#define BINARY_SEARCH_TREE

#include "node/Node.h"

class Binary_search_tree {
private:
  Node *root;

public:
  Binary_search_tree(int rootValue);

  void setRoot(Node* newRoot);
  Node* getRoot();
  void insertNode(int newValue);
  void insertNodesByArray(int *array);
  void removeNode();
  Node *search(int value);
  void preOrderTraverse();
  void inOrderTraverse();
  void postOrderTraverse();
  void printTree();
  Node *getMaximumNode();
  Node *getMinimumNode();
  Node *getPredecesorNode(Node *node);
  Node *getSuccesorNode(Node *node);
};
#endif // BINARY_SEARCH_TREE
