import pytest
from unittest.mock import MagicMock
from student import Student
from student_stats import StudentStats


@pytest.fixture
def student_stats_student_mock():
    student_mock = MagicMock()
    student_stats = StudentStats(student_mock)
    return student_stats, student_mock


def test_calc_average_ShouldReturnResult(student_stats_student_mock):
    student_stats, student_mock = student_stats_student_mock

    grades = [5, 5, 4, 5, 3, 4, 2, 3]
    student_mock.get_grades = MagicMock(return_value = grades)

    expected = sum(grades) / len(grades)
    result = student_stats.calc_average()

    student_mock.get_grades.assert_called_once_with()

    assert expected == result
