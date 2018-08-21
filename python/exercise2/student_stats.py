class StudentStats:
    def __init__(self, student):
        self.student = student

    def calc_average(self):
        averages = {}
        for course in self.student.get_courses():
            grades = self.student.get_grades(course)
            averages[course] = sum(grades) / len(grades)

        return averages
