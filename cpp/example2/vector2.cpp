class Vector2
{
    public:
        Vector2(int x = 0, int y = 0) : x(x), y(y) {}

        Vector2 operator+(const Vector2& rhs) const
        {
            return Vector2(x + rhs.x, y + rhs.y);
        }

        Vector2 operator-(const Vector2& rhs) const
        {
            return Vector2(x - rhs.x, y - rhs.y);
        }

        bool operator==(const Vector2& rhs) const
        {
            return x == rhs.x && y == rhs.y;
        }

    private:
        int x;
        int y;
};
