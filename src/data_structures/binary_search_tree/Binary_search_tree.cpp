#include "Binary_search_tree.h"
#include "node/Node.h"

Binary_search_tree::Binary_search_tree() {}

Binary_search_tree::Binary_search_tree(int rootValue) {
  this->root = new Node(rootValue);
}

void Binary_search_tree::setRoot(Node *node) { this->root = node; }

Node *Binary_search_tree::getRoot() { return this->root; }

void Binary_search_tree::insertNode(Node *node, int value) {
  if (value < node->getData()) {
    if (node->getLeft() == NULL) {
      Node *newNode = new Node(value);
      node->setLeft(newNode);
    } else {
      this->insertNode(node->getLeft(), value);
    }
  } else if (value > node->getData()) {
    if (node->getRight() == NULL) {
      Node *newNode = new Node(value);
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

Node *Binary_search_tree::searchNode(Node *node, int value) {
  if (node == NULL || node->getData() == value) {
    return node;
  }
  if (value < node->getData()) {
    return searchNode(node->getLeft(), value);
  }
  return searchNode(node->getRight(), value);
}

Node *Binary_search_tree::search(int value) {
  return this->searchNode(this->getRoot(), value);
}

int Binary_search_tree::getMinimumValue() {
  return this->getMinimumNode(this->getRoot())->getData();
}

Node *Binary_search_tree::getMinimumNode(Node *node) {
  if (node->getLeft() == NULL) {
    return node;
  }
  return this->getMinimumNode(node->getLeft());
}

int Binary_search_tree::getMaximumValue() {
  return this->getMaximumNode(this->getRoot())->getData();
}

Node *Binary_search_tree::getMaximumNode(Node *node) {
  if (node->getRight() == NULL) {
    return node;
  }
  return this->getMaximumNode(node->getRight());
}

void Binary_search_tree::remove(int value) {
  this->removeNode(this->getRoot(), value);
}

Node *Binary_search_tree::removeNode(Node *node, int value) {
  if (node == NULL) {
    return node;
  }

  if (value < node->getData()) {
    node->setLeft(this->removeNode(node->getLeft(), value));
  } else if (value > node->getData()) {
    node->setRight(this->removeNode(node->getRight(), value));
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

    Node *tmp = this->getMinimumNode(node->getRight());
    node->setData(tmp->getData());
    node->setRight(this->removeNode(node->getRight(), tmp->getData()));
  }
  return node;
}
