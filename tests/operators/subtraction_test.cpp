#include "subtraction.h"
#include "gtest/gtest.h"

namespace {
TEST(subtraction_library, positive) {
  EXPECT_EQ(subtraction(1, 1), 0);
  EXPECT_NE(subtraction(1, 1), 2);
}

TEST(subtraction_library, negative) {
  EXPECT_EQ(subtraction(-1, -1), 0);
  EXPECT_NE(subtraction(-1, -1), -2);
}

TEST(subtraction_library, zero) {
  EXPECT_EQ(subtraction(0, 0), 0);
  EXPECT_EQ(subtraction(1, 0), 1);
  EXPECT_EQ(subtraction(0, 1), -1);
}

} // namespace
