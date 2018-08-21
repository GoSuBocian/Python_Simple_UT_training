class Vector2:
    def __init__(self, x ,y):
        self.x = x
        self.y = y

    def __add__(self, rhs):
        return Vector2(self.x + rhs.x, self.y + rhs.y)

    def __sub__(self, rhs):
        return Vector2(self.x - rhs.x, self.y - rhs.y)

    def __eq__(self, rhs):
        return (self.x == rhs.x and self.y == rhs.y)
