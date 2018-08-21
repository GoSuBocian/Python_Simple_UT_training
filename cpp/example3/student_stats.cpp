#include "student.cpp"
#include <iostream>

class StudentStats
{
    public:
        StudentStats(const Student& student) : student(student) {}

        float calc_average() const
        {
            int sum = 0;
            const std::vector<int>& grades = student.get_grades();
            for (auto grade : grades)
            {
                sum += grade;
            }

            return (float)sum / grades.size();
        }

    private:
        const Student& student;
};
