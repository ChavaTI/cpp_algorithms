#include <iostream>
#include "Bst_printer.h"
#include "../Binary_search_tree.h"
#include "../node/Node.h"

void Bst_printer::print(Binary_search_tree *bst) {
  this->printTree(bst->getRoot(), "", false);
}

void Bst_printer::printTree(Node *node, const std::string &prefix,
                                   bool isLeft) {
  if (node == NULL) {
    return;
  }

  std::cout << prefix;
  std::cout << (isLeft ? "├──" : "└──");
  std::cout << node->getData() << std::endl;

  this->printTree(node->getLeft(), prefix + (isLeft ? "│   " : "    "), true);
  this->printTree(node->getRight(), prefix + (isLeft ? "│   " : "    "), false);
}
