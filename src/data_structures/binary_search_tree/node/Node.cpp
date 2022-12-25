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

void Node::setLeft(int newNode) {
  left = new Node(newNode);
}

void Node::setRight(int newNode) {
  right = new Node(newNode);
}

int Node::getValue() {
  return data;
}

Node* Node::getLeft() {
  return left;
}

Node* Node::getRight() {
  return right;
}
