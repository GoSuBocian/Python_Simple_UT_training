def is_palindrome(string):
    while len(string) > 1:
        a = string[0]
        b = string[-1]
        string = string[1:-1]

        if a != b:
            return False

    if len(string) == 0:
        raise Exception("FIX ME PLEASE")

    return True
