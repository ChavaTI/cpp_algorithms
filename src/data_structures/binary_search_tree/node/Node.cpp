#include "Node.h"
#include "stdio.h"

Node::Node(int value) {
  data = value;

  left = NULL;
  right = NULL;
}

void Node::setData(int newValue) {
  data = newValue;
}

void Node::setLeft(Node* left) {
  this->left = left;
}

void Node::setRight(Node* right) {
  this->right = right;
}

int Node::getData() {
  return data;
}

Node* Node::getLeft() {
  return left;
}

Node* Node::getRight() {
  return right;
}
