#include "student.cpp"
#include <iostream>

class StudentStats
{
    public:
        StudentStats(Student& student) : student(student) {}

        std::map<std::string, float> calc_average() 
        {
            std::map<std::string, float> averages;

            for (auto course : student.get_courses())
            {
                auto sum = 0;
                std::vector<int> grades = student.get_grades(course);
                for (auto grade : grades)
                {
                    sum += grade;
                }

                averages[course] = (float)sum / grades.size();
            }

            return averages;
        }

    private:
        Student& student;
};
