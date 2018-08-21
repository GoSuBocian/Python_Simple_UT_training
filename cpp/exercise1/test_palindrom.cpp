#include "palindrome.cpp"
#include <gtest/gtest.h>

class Is_palindromTest : public :: testing::Test
{

};
TEST_F(Is_palindromTest, ShouldReturnTrue_WhenPalindrome)
{
    ASSERT_TRUE(is_palindrome("anna"));
}

