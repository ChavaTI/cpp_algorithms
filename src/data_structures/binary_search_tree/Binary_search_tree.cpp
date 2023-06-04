#include "Binary_search_tree.h"
#include "node/Node.h"
#include "stdio.h"

Binary_search_tree::Binary_search_tree() {}

Binary_search_tree::Binary_search_tree(int rootValue) {
  this->root = new Node(rootValue);
}

void Binary_search_tree::setRoot(Node *newRoot) { this->root = newRoot; }

Node *Binary_search_tree::getRoot() { return this->root; }

void Binary_search_tree::insertNode(int newValue) {
  Node *newNode = new Node(newValue);

  if (this->root == NULL) {
    this->root = newNode;
  } else {
    Node *currentNode = this->getRoot();
    while (true) {
      if (newValue <= currentNode->getData()) {
        if (currentNode->getLeft() == NULL) {
          currentNode->setLeft(newNode);
          break;
        } else {
          currentNode = currentNode->getLeft();
        }

      } else {
        if (currentNode->getRight() == NULL) {
          currentNode->setRight(newNode);
          break;
        } else {
          currentNode = currentNode->getRight();
        }
      }
    }
  }
}

void Binary_search_tree::insertNodesFromArray(int *array, int length) {
  for (int i = 0; i < length; i++) {
    this->insertNode(array[i]);
  }
}

int Binary_search_tree::getHeight() {
  return this->calculateHeight(this->getRoot());
}

int Binary_search_tree::calculateHeight(Node *node) {
  if (node == NULL) {
    return 0;
  }

  int leftHeight = this->calculateHeight(node->getLeft());
  int rightHeight = this->calculateHeight(node->getRight());

  return (leftHeight > rightHeight) ? leftHeight + 1 : rightHeight + 1;
}
