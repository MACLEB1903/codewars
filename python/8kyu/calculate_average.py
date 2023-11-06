"""

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/57a2013acf1fa5bfc4000921/train/python


Instructions:
Write a function which calculates the average of the numbers in a given array.
Note: Empty arrays should return 0.

"""

def find_average(array):
    return sum(array) / len(array) if array else 0