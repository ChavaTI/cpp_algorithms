#ifndef BST_PRINTER_H
#define BST_PRINTER_H

#include <iostream>
#include "../Binary_search_tree.h"
#include "../node/Node.h"

class Bst_printer {

private:
  void printTree(Node *node, const std::string &prefix, bool isLeft);

public:
  void print(Binary_search_tree *bst);
};

#endif // BST_PRINTER_H
