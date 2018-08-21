import pytest
from palindrome import is_palindrome


@pytest.fixture
def strings():
    pass

def test_is_palindrome_ShouldReturnTrue_WhenPalindrome():
    palindrom = "anna"
    expected = True
    result = is_palindrome(palindrom)
    assert expected == result 

def test_is_palindrome_ShouldReturnTrue_WhenPalindrome1():
    palindrom = "anna1"
    expected = False
    result = is_palindrome(palindrom)
    assert expected == result 
