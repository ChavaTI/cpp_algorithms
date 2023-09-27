#ifndef BINARY_SEARCH_TREE
#define BINARY_SEARCH_TREE

#include "node/Node.h"
#include <iostream>

class Binary_search_tree {
private:
  Node *root;
  int calculateHeight(Node *node);

public:
  Binary_search_tree();
  Binary_search_tree(int rootValue);

  void setRoot(Node *node);
  Node *getRoot();
  void insert(int value);
  void insertNodesFromArray(int *array, int length);
  void remove(int value);
  Node *search(int value);
  int getHeight();
  int getMaximumValue();
  int getMinimumValue();
};
#endif // BINARY_SEARCH_TREE
