class StudentStats:
    def __init__(self, student):
        self.student = student

    def calc_average(self):
        grades = self.student.get_grades()
        return sum(grades) / len(grades)
