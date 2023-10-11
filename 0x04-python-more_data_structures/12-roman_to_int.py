#!/usr/bin/python3
def roman_to_int(roman_string):
    """converts a Roman numeral to an integer."""
    romans_letters = {"I": 1, "V": 5, "X": 10, "L": 50, "C": 100, "D": 500, "M": 1000}
    if (roman_string is None) or (type(roman_string) is not str):
        return 0

    n = len(roman_string)
    val_int = romans_letters[roman_string[n - 1]]
    for i in range(n - 1, 0, -1):
        current_value = romans_letters[roman_string[i]]
        previous_value = romans_letters[roman_string[i - 1]]

        if previous_value >= current_value:
            val_int += previous_value
        else:
            val_int -= previous_value

    return val_int
