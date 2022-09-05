#include "sum.h"
#include "gtest/gtest.h"

namespace {
TEST(sum_library, positive) {
  EXPECT_EQ(sum(1, 1), 2);
  EXPECT_NE(sum(1, 1), 0);
}

TEST(sum_library, negative) {
  EXPECT_EQ(sum(-1, -1), -2);
  EXPECT_EQ(sum(-1, 1), 0);
  EXPECT_NE(sum(-1, -1), 2);
}

TEST(sum_library, zero) {
  EXPECT_EQ(sum(0, 0), 0);
  EXPECT_EQ(sum(1, 0), 1);
}


} // namespace
