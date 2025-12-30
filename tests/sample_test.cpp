#include "gtest/gtest.h"
#include "base_interface.hpp"

// Проверяем, что std::vector<int> имеет value_type
TEST(HasValueTypeTest, VectorHasValueType) {
    EXPECT_TRUE(HasValueType<std::vector<int>>::value);
}

// Проверяем, что int не имеет value_type
TEST(HasValueTypeTest, IntDoesNotHaveValueType) {
    EXPECT_FALSE(HasValueType<int>::value);
}
