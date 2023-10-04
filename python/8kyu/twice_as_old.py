"""

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/5b853229cfde412a470000d0/train/python


Instructions:
Your function takes two arguments:
1. current father's age (years)
2. current age of his son (years)

Сalculate how many years ago the father was twice as old as his son (or in how many years he will be twice as old). The answer is always greater or equal to 0, no matter if it was in the past or it is in the future.

"""

def twice_as_old(dad_years_old, son_years_old):
    return abs(dad_years_old - son_years_old * 2)
