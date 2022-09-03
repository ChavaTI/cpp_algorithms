#include "gtest/gtest.h"
#include "sum.h"

TEST(sum_library, addition) {
  EXPECT_EQ(sum(1,1), 2);
}
