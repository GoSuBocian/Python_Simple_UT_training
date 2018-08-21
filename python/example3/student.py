class Student:
    def __init__(self, name):
        self.name = name
        self._grades = []

    def add_grade(self, grade):
        self._grades.append(grade)

    def get_grades(self):
        return self._grades
