import pytest


def sum_positive(a, b):
    if a < 0 or b < 0:
        raise ValueError

    return a + b


def test_sum_positive_ShouldReturnResult():
    expected = 4
    result = sum_positive(1, 3)
    assert expected == result

def test_sum_positive_ShouldReturnResult1():
    expected = 1
    result = sum_positive(0, 1)
    assert expected == result

def test_sum_positive_ShouldReturnResult2():
    expected = 0
    result = sum_positive(0, 0)
    assert expected == result

def test_sum_positive_ShouldReturnResult_wrong():
     expected = 4
     result = sum_positive(1, 3)
     assert expected == result


def test_sum_positive_ShouldThrowException_WhenNegativeArguments():
    with pytest.raises(ValueError):
        sum_positive(2, -2)

def test_sum_positive_ShouldThrowException_WhenNegativeArguments1():
    with pytest.raises(ValueError):
        sum_positive(-2, 2)



 #def test_sum_positive_ShouldThrowException_WhenNegativeArguments_wrong():
 #    sum_positive(2, -2)
