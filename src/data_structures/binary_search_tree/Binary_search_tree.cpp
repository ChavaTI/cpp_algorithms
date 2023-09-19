#include "Binary_search_tree.h"
#include "./bst_manipulator/Bst_manipulator.h"
#include "node/Node.h"

Binary_search_tree::Binary_search_tree() {}

Binary_search_tree::Binary_search_tree(int rootValue) {
  this->root = new Node(rootValue);
}

void Binary_search_tree::setRoot(Node *node) { this->root = node; }

Node *Binary_search_tree::getRoot() { return this->root; }


void Binary_search_tree::insert(int value) {
  if (this->getRoot() == NULL) {
    this->setRoot(new Node(value));
  } else {
    Bst_manipulator::insertNode(this->getRoot(), value);
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

Node *Binary_search_tree::search(int value) {
  return Bst_manipulator::searchNode(this->getRoot(), value);
}

int Binary_search_tree::getMinimumValue() {
  return Bst_manipulator::getMinimumNode(this->getRoot())->getData();
}

int Binary_search_tree::getMaximumValue() {
  return Bst_manipulator::getMaximumNode(this->getRoot())->getData();
}

void Binary_search_tree::remove(int value) {
  Bst_manipulator::removeNode(this->getRoot(), value);
}

