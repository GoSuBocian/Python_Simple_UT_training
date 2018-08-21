#include <stdexcept>
#include <gtest/gtest.h>

int sum_positive(int a, int b)
{
    if (a < 0 || b < 0)
    {
        throw std::invalid_argument("a and b must be positive");
    }

    return a + b;
}

TEST(SumPositiveTest, ShouldReturnResult)
{
    int expected = 4;
    int result = sum_positive(1, 3);
    ASSERT_EQ(result, expected);
}

 TEST(SumPositiveTest, ShouldReturnResult_wrong)
 {
     int expected = 0;
     int result = sum_positive(0, 0);
     ASSERT_EQ(result, expected);
 }

TEST(SumPositiveTest, ShouldThrowException_WhenNegativeArguments)
{
    EXPECT_THROW(sum_positive(2, -2), std::invalid_argument);
}

TEST(SumPositiveTest, ShouldThrowException_WhenNegativeArguments1)
{
    EXPECT_THROW(sum_positive(-1, 1), std::invalid_argument);
}
// TEST(SumPositiveTest, ShouldThrowException_WhenNegativeArguments_wrong)
// {
//     int expected = 0;
//     int result = sum_positive(2, -2);
//     ASSERT_EQ(result, expected);
// }

int main(int argc, char **argv) 
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
