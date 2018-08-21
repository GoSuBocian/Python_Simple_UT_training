#include <vector>
#include <map>
#include <string>

class Student
{
    public:
        virtual void add_grade(std::string course, int grade)
        {
            if (grades.find(course) == grades.end())
            {
                grades[course] = std::vector<int>(); 
            }

            grades[course].push_back(grade);
        }

        virtual std::vector<int> get_grades(std::string course)
        {
            return grades[course];
        }

        virtual std::vector<std::string> get_courses() const
        {
            std::vector<std::string> keys;
            for (auto const& el : grades)
            {
                keys.push_back(el.first);
            }

            return keys;
        }

    private:
        std::map<std::string, std::vector<int> > grades;
};
