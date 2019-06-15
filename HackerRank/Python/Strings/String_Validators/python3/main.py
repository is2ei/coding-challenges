if __name__ == '__main__':
    s = input()

    has_alnum = False
    has_alpha = False
    has_digit = False
    has_lower = False
    has_upper = False
    for i in range(0, len(s)):
        if s[i].isalnum():
            has_alnum = True
        if s[i].isalpha():
            has_alpha = True
        if s[i].isdigit():
            has_digit = True
        if s[i].islower():
            has_lower = True
        if s[i].isupper():
            has_upper = True
    print(has_alnum)
    print(has_alpha)
    print(has_digit)
    print(has_lower)
    print(has_upper)
