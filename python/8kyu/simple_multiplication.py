"""

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/583710ccaa6717322c000105/train/python


Instructions:
This kata is about multiplying a given number by eight if it is an even number and by nine otherwise.

"""

def simple_multiplication(number) :
    return number * 9 if number % 2 else number * 8