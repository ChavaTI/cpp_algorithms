#include "modulus.h"
#include "gtest/gtest.h"

namespace {
TEST(modulus, positive) {
  EXPECT_EQ(modulus(2, 2), 0);
  EXPECT_EQ(modulus(4, 2), 0);
  EXPECT_EQ(modulus(8, 2), 0);
}

} // namespace
