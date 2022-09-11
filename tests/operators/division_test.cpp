#include "division.h"
#include "gtest/gtest.h"

namespace {
TEST(division, positive) {
  EXPECT_EQ(division(1.0,1.0), 1.0);
}
} // namespace
