#include <string>
#include <exception>

bool is_palindrome(std::string str)
{

    int left = 0;
    int right = str.length() - 1;

    while (true)
    {
        if (left >= right)
        {
            break;
        }

        char left_char = str[left];
        char right_char = str[right];

        if (left_char != right_char)
        {
            return false;
        }

        ++left;
        --right;
    }

    return true;
}
