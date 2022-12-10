#include "node/Node.h"
#include "gtest/gtest.h"

namespace {
TEST(node_test, structure_data) {

  int rootValue = 1;
  int leftValue = 2;
  int rightValue = 3;

  Node *root = new Node(rootValue);

  root->setLeft(leftValue);
  root->setRight(rightValue);

  EXPECT_EQ(rootValue, root->getValue());
  EXPECT_EQ(leftValue, root->getLeft()->getValue());
  EXPECT_EQ(rightValue, root->getRight()->getValue());
}
} // namespace
