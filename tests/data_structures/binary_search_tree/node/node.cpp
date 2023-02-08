#include "node/Node.h"
#include "gtest/gtest.h"

namespace {
TEST(node_test, structure_data) {

  int rootValue = 1;
  int leftValue = 2;
  int rightValue = 3;

  Node *root = new Node(rootValue);

  root->setLeft(new Node(leftValue));
  root->setRight(new Node(rightValue));

  EXPECT_EQ(rootValue, root->getData());
  EXPECT_EQ(leftValue, root->getLeft()->getData());
  EXPECT_EQ(rightValue, root->getRight()->getData());
}
} // namespace
