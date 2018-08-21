#include "vector2.cpp"
#include <gtest/gtest.h>

class Vector2Test : public ::testing::Test
{
    protected:
        Vector2 v1, v2;

        virtual void SetUp() override
        {
            v1 = Vector2(1, 2);
            v2 = Vector2(-1, -2);
        }
};

TEST_F(Vector2Test, add_ShouldReturnResult)
{
    Vector2 expected(0, 0);
    ASSERT_EQ(expected, v1+v2);

    expected = Vector2(2, 4);
    ASSERT_EQ(expected, v1+v1);
}

TEST_F(Vector2Test, sub_ShouldReturnResult)
{
    Vector2 expected(2, 4);
    ASSERT_EQ(expected, v1-v2);

    expected = Vector2(0, 0);
    ASSERT_EQ(expected, v1-v1);
}

int main(int argc, char **argv) 
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
