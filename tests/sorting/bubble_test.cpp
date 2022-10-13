#include "bubble.h"
#include "iostream"
#include "gtest/gtest.h"

namespace {
TEST(bubble, sortArray) {
  int array[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
  int arrayExpected[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int *arraySorted = bubble(array, 10);
  for (int i = 0; i < 10; i++) {
    EXPECT_EQ(arraySorted[i], arrayExpected[i]);
  }
}

TEST(bubble, sortNegativeArray) {
  int array[10] = {-1, -2, -3, -4, -5, -6, -7, -8, -9, -10};
  int arrayExpected[10] = {-10, -9, -8, -7, -6, -5, -4, -3, -2, -1};
  int *arraySorted = bubble(array, 10);
  for (int i = 0; i < 10; i++) {
    EXPECT_EQ(arraySorted[i], arrayExpected[i]);
  }

}

} // namespace
