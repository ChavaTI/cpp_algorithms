#include "Binary_search_tree.h"
#include "node/Node.h"
#include "gtest/gtest.h"

namespace {
TEST(bst, insert_function) {
  int rootValue = 5;
  int secondLeft = 3;
  int secondRight = 7;
  int thirdLeftByLeft = 2;
  int thirdRightByLeft = 4;
  int thirdLeftByRight = 6;
  int thirdRightByRight = 8;

  Binary_search_tree *bst = new Binary_search_tree();
  bst->insert(rootValue);
  bst->insert(secondLeft);
  bst->insert(secondRight);

  bst->insert(thirdLeftByLeft);
  bst->insert(thirdRightByLeft);
  bst->insert(thirdLeftByRight);
  bst->insert(thirdRightByRight);

  EXPECT_EQ(bst->getRoot()->getData(), rootValue);
  EXPECT_EQ(bst->getRoot()->getLeft()->getData(), secondLeft);
  EXPECT_EQ(bst->getRoot()->getRight()->getData(), secondRight);

  EXPECT_EQ(bst->getRoot()->getLeft()->getLeft()->getData(), thirdLeftByLeft);
  EXPECT_EQ(bst->getRoot()->getLeft()->getRight()->getData(), thirdRightByLeft);
  EXPECT_EQ(bst->getRoot()->getRight()->getLeft()->getData(), thirdLeftByRight);
  EXPECT_EQ(bst->getRoot()->getRight()->getRight()->getData(),
            thirdRightByRight);
}

TEST(bst, insert_by_array_function) {
  int array[] = {50, 30, 70, 20, 40, 60, 80};

  Binary_search_tree *bst = new Binary_search_tree();
  int length = sizeof(array) / sizeof(array[0]);

  bst->insertNodesFromArray(array, length);

  EXPECT_EQ(bst->getRoot()->getData(), array[0]);
  EXPECT_EQ(bst->getRoot()->getLeft()->getData(), array[1]);
  EXPECT_EQ(bst->getRoot()->getRight()->getData(), array[2]);

  EXPECT_EQ(bst->getRoot()->getLeft()->getLeft()->getData(), array[3]);
  EXPECT_EQ(bst->getRoot()->getLeft()->getRight()->getData(), array[4]);
  EXPECT_EQ(bst->getRoot()->getRight()->getLeft()->getData(), array[5]);
  EXPECT_EQ(bst->getRoot()->getRight()->getRight()->getData(), array[6]);
}

TEST(bst, no_adding_duplicate_values) {
  int array[] = {5, 5, 5, 5, 5, 5, 5};
  int length = sizeof(array) / sizeof(array[0]);

  Binary_search_tree *bst = new Binary_search_tree();

  bst->insertNodesFromArray(array, length);

  EXPECT_EQ(bst->getRoot()->getData(), array[0]);
  EXPECT_EQ(bst->getRoot()->getLeft(), nullptr);
  EXPECT_EQ(bst->getRoot()->getRight(), nullptr);
}

TEST(bst, get_height_function) {
  int array[] = {50, 30, 70, 20, 40, 60, 80};
  int expectedHeight = 3;
  Binary_search_tree *bst = new Binary_search_tree();
  int length = sizeof(array) / sizeof(array[0]);

  bst->insertNodesFromArray(array, length);

  int height = bst->getHeight();
  EXPECT_EQ(height, expectedHeight);
}

TEST(bst, get_height_function_with_empty_tree) {
  int expectedHeight = 0;
  Binary_search_tree *bst = new Binary_search_tree();
  int height = bst->getHeight();
  EXPECT_EQ(height, expectedHeight);
}

TEST(bst, search_node) {
  int array[] = {50, 30, 70, 20, 40, 60, 80};
  int length = sizeof(array) / sizeof(array[0]);
  int valueToSearch = 20;

  Binary_search_tree *bst = new Binary_search_tree();

  bst->insertNodesFromArray(array, length);
  Node *nodeSearched = bst->search(valueToSearch);

  EXPECT_EQ(nodeSearched->getData(), valueToSearch);
}

TEST(bst, search_node_not_found) {
  int array[] = {50, 30, 70, 20, 40, 60, 80};

  int length = sizeof(array) / sizeof(array[0]);
  int valueToSearch = 100;

  Binary_search_tree *bst = new Binary_search_tree();

  bst->insertNodesFromArray(array, length);
  Node *nodeSearched = bst->search(valueToSearch);

  EXPECT_EQ(nodeSearched, nullptr);
}

TEST(bst, get_minimum_value) {
  int array[] = {50, 30, 70, 20, 40, 60, 80};
  int length = sizeof(array) / sizeof(array[0]);
  int expectedMinimumValue = 20;

  Binary_search_tree *bst = new Binary_search_tree();

  bst->insertNodesFromArray(array, length);
  int minimumValue = bst->getMinimumValue();

  EXPECT_EQ(minimumValue, expectedMinimumValue);
}

TEST(bst, get_maximum_value) {
  int array[] = {50, 30, 70, 20, 40, 60, 80};
  int length = sizeof(array) / sizeof(array[0]);
  int expectedMaximumValue = 80;

  Binary_search_tree *bst = new Binary_search_tree();

  bst->insertNodesFromArray(array, length);
  int maximumValue = bst->getMaximumValue();

  EXPECT_EQ(maximumValue, expectedMaximumValue);
}

TEST(bst, remove_node) {
  int array[] = {50, 30, 70, 20, 40, 60, 80};
  int length = sizeof(array) / sizeof(array[0]);
  int valueToRemove = 50;

  Binary_search_tree *bst = new Binary_search_tree();

  bst->insertNodesFromArray(array, length);
  bst->remove(valueToRemove);

  EXPECT_EQ(bst->getRoot()->getData(), 60);
  EXPECT_EQ(bst->getRoot()->getLeft()->getData(), 30);
  EXPECT_EQ(bst->getRoot()->getRight()->getData(), 70);
  EXPECT_EQ(bst->getRoot()->getLeft()->getLeft()->getData(), 20);
  EXPECT_EQ(bst->getRoot()->getLeft()->getRight()->getData(), 40);
  EXPECT_EQ(bst->getRoot()->getRight()->getLeft(), nullptr);
  EXPECT_EQ(bst->getRoot()->getRight()->getRight()->getData(), 80);
}

} // namespace
