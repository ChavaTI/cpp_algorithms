#ifndef BINARY_SEARCH_TREE
#define BINARY_SEARCH_TREE

#include "node/Node.h"
#include <iostream>

class Binary_search_tree {
private:
  Node *root;
  int calculateHeight(Node *node);
  void insertNode(Node *node, int value);

public:
  Binary_search_tree();
  Binary_search_tree(int rootValue);

  void setRoot(Node *node);
  Node *getRoot();
  void insert(int value);
  void insertNodesFromArray(int *array, int length);
  void removeNode();
  Node *search(int value);
  Node *searchNode(Node *node, int value);
  void preOrderTraverse();
  void inOrderTraverse();
  void postOrderTraverse();
  int getHeight();
  void printTree(Node *node, const std::string &prefix, bool isLeft);
  void print();
  Node *getMaximumNode();
  Node *getMinimumNode();
  Node *getPredecesorNode(Node *node);
  Node *getSuccesorNode(Node *node);
};
#endif // BINARY_SEARCH_TREE
