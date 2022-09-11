#include "multiplication.h"
#include "gtest/gtest.h"

namespace {
TEST(multiplication, positve) {
  EXPECT_EQ(multiplication(1, 1), 1);
  EXPECT_EQ(multiplication(2, 1), 2);
  EXPECT_EQ(multiplication(2, 2), 4);
}

TEST(multiplication, negative) {
  EXPECT_EQ(multiplication(-1, 1), -1);
  EXPECT_EQ(multiplication(-2, -1), 2);
  EXPECT_EQ(multiplication(-2, 2), -4);
}

TEST(multiplication, zero) {
  EXPECT_EQ(multiplication(0, 0), 0);
  EXPECT_EQ(multiplication(2, 0), 0);
  EXPECT_EQ(multiplication(-2, 0), 0);
}
} // namespace
