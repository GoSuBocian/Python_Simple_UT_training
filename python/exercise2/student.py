class Student:
    def __init__(self, name):
        self.name = name
        self._grades = {}

    def add_grade(self, course, grade):
        try:
            self._grades[course].append(grade)
        except KeyError:
            self._grades[course] = [grade]

    def get_grades(self, course):
        return self._grades[course]

    def get_courses(self):
        return self._grades.keys()
