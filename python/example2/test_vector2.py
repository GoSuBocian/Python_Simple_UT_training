import pytest
from vector2 import Vector2


@pytest.fixture
def vectors():
    return [Vector2(1, 2), Vector2(-1, -2)]


def test_add_ShouldReturnResult(vectors):
    v1, v2 = vectors
    expected = Vector2(0, 0)
    assert expected == v1+v2

    expected = Vector2(2, 4)
    assert expected == v1+v1

def test_sub_ShouldReturnResult(vectors):
    v1, v2 = vectors
    expected = Vector2(2, 4)
    assert expected == v1-v2

    expected = Vector2(0, 0)
    assert expected == v1-v1
