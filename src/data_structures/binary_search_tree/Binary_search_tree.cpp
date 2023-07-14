#include "Binary_search_tree.h"
#include "node/Node.h"
#include <iostream>

Binary_search_tree::Binary_search_tree() {}

Binary_search_tree::Binary_search_tree(int rootValue) {
  this->root = new Node(rootValue);
}

void Binary_search_tree::setRoot(Node* node) { this->root = node; }

Node *Binary_search_tree::getRoot() { return this->root; }

void Binary_search_tree::insertNode(Node *node, int value) {
  if (value < node->getData()) {
    if(node->getLeft() == NULL) {
      Node* newNode = new Node(value);
      node->setLeft(newNode);
    } else {
      this->insertNode(node->getLeft(), value);
    }
  } else {
    if(node->getRight() == NULL) {
      Node* newNode = new Node(value);
      node->setRight(newNode);
    } else {
      this->insertNode(node->getRight(), value);
    }
  }
}

void Binary_search_tree::insert(int value) {
  if (this->getRoot() == NULL) {
    this->setRoot(new Node(value));
  } else {
    this->insertNode(this->getRoot(), value);
  }

}

void Binary_search_tree::insertNodesFromArray(int *array, int length) {
  for (int i = 0; i < length; i++) {
    this->insert(array[i]);
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

void Binary_search_tree::print() {
  this->printTree(this->getRoot(), "", false);
}

void Binary_search_tree::printTree(Node *node, const std::string &prefix,
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
