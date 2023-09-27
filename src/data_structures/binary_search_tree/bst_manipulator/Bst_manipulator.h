#ifndef BST_MANIPULATOR
#define BST_MANIPULATOR

#include "../node/Node.h"

class Bst_manipulator {
public:
  static void insertNode(Node *node, int value);
  static Node *removeNode(Node *node, int value);
  static Node *searchNode(Node *node, int value);
  static Node *getMaximumNode(Node *node);
  static Node *getMinimumNode(Node *node);
};
#endif // BST_MANIPULATOR
