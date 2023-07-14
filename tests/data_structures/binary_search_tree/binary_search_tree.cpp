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

// TODO (codeDude): Add a test to test the print function

} // namespace
