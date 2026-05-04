"""

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/5738f5ea9545204cec000155/train/python


Instructions:
Bob is a lazy man.

He needs you to create a method that can determine how many letters (both uppercase and lowercase ASCII letters) and digits are in a given string.

Example:
"hel2!lo" --> 6
"wicked .. !" --> 6
"!?..A" --> 1

"""

import re

def count_letters_and_digits(s):
    return len([c for c in s if re.compile("[a-zA-Z0-9]").match(c)])

def count_letters_and_digits(s):
    return sum(map(str.isalnum, s))