#include "./Bst_manipulator.h"
#include "../node/Node.h"
#include <iostream>

void Bst_manipulator::insertNode(Node *node, int value) {
  if (value < node->getData()) {
    if (node->getLeft() == NULL) {
      Node *newNode = new Node(value);
      node->setLeft(newNode);
    } else {
      Bst_manipulator::insertNode(node->getLeft(), value);
    }
  } else if (value > node->getData()) {
    if (node->getRight() == NULL) {
      Node *newNode = new Node(value);
      node->setRight(newNode);
    } else {
      Bst_manipulator::insertNode(node->getRight(), value);
    }
  }
}

Node *Bst_manipulator::searchNode(Node *node, int value) {
  if (node == NULL || node->getData() == value) {
    return node;
  }
  if (value < node->getData()) {
    return searchNode(node->getLeft(), value);
  }
  return searchNode(node->getRight(), value);
}

Node *Bst_manipulator::getMinimumNode(Node *node) {
  if (node->getLeft() == NULL) {
    return node;
  }
  return Bst_manipulator::getMinimumNode(node->getLeft());
}

Node *Bst_manipulator::getMaximumNode(Node *node) {
  if (node->getRight() == NULL) {
    return node;
  }
  return Bst_manipulator::getMaximumNode(node->getRight());
}

Node *Bst_manipulator::removeNode(Node *node, int value) {
  if (node == NULL) {
    return node;
  }

  if (value < node->getData()) {
    node->setLeft(Bst_manipulator::removeNode(node->getLeft(), value));
  } else if (value > node->getData()) {
    node->setRight(Bst_manipulator::removeNode(node->getRight(), value));
  } else {
    if (node->getLeft() == NULL) {
      Node *tmp = node->getRight();
      delete node;
      return tmp;
    } else if (node->getRight() == NULL) {
      Node *tmp = node->getLeft();
      delete node;
      return tmp;
    }

    Node *tmp = Bst_manipulator::getMinimumNode(node->getRight());
    node->setData(tmp->getData());
    node->setRight(Bst_manipulator::removeNode(node->getRight(), tmp->getData()));
  }
  return node;
}
