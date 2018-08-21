#include "student_stats.cpp"
#include <gtest/gtest.h>
#include <gmock/gmock.h>

using ::testing::Return;

class MockStudent : public Student
{
    public:
        MOCK_METHOD1(add_grade, void(int grade));
        MOCK_CONST_METHOD0(get_grades, std::vector<int>());
};

class TestStudentBook : public ::testing::Test
{
    protected:
        MockStudent mock_student;
        StudentStats* student_stats;

        virtual void SetUp() override
        {
            student_stats = new StudentStats(mock_student);
        }

        virtual void TearDown() override
        {
            delete student_stats;
        }
};

TEST_F(TestStudentBook, calc_average_ShouldReturnResult)
{
    std::vector<int> grades = {2, 3, 4, 3, 4, 5, 5, 4};
    int sum = 0;
    for (auto grade : grades)
    {
        sum += grade;
    }

    EXPECT_CALL(mock_student, get_grades()).WillOnce(Return(grades));

    float expected = (float)sum / grades.size();
    float result = student_stats->calc_average();

    ASSERT_EQ(expected, result);
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleMock(&argc, argv);
    return RUN_ALL_TESTS();
}
