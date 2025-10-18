#include <gtest/gtest.h>
#include "../include/is_clean.hpp"

TEST(test_01, basic_test_set)
{
    ASSERT_TRUE(isClean(123)==true);
}

TEST(test_02, basic_test_set)
{
    ASSERT_TRUE(isClean(5566778899999)==true);
}

TEST(test_04, basic_test_set)
{
    ASSERT_TRUE(isClean(-143254)==false);
}

TEST(test_05, basic_test_set)
{
    ASSERT_TRUE(isClean(0)==true);
}

TEST(test_06, basic_test_set)
{
    ASSERT_TRUE(isClean(-100321914)==false);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}