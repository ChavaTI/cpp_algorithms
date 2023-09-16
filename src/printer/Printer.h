#ifndef PRINT_H
#define PRINT_H

#include "../data_structures/binary_search_tree/Binary_search_tree.h"

class Printer {
public:
  virtual void print(Binary_search_tree *bst) = 0;
};

#endif //  PRINT_H
