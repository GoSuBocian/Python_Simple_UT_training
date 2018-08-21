#include <vector>

class Student
{
    public:
        virtual void add_grade(int grade)
        {
            grades.push_back(grade);
        }

        virtual std::vector<int> get_grades() const
        {
            return grades;
        }

    private:
        std::vector<int> grades;
};
