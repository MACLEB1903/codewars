"""

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/55a5befdf16499bffb00007b/train/python


Instructions:
Make multiple functions that will return the sum, difference, modulus, product, quotient, and the exponent respectively.

Please use the following function names:

addition = add
multiply = multiply
division = divide (both integer and float divisions are accepted)
modulus = mod
exponential = exponent
subtraction = subt

Note: All funcitons can return int and all will recieve 2 integers.
Note: All math operations will be:
  a (operation) b*

"""

def add(a: int, b: int) -> int:
    return a + b


def multiply(a: int, b: int) -> int:
    return a * b


def divide(a: int, b: int):
    return a / b


def mod(a: int, b: int) -> int:
    return a % b


def exponent(a: int, b: int) -> int:
    return a ** b


def subt(a: int, b: int) -> int:
    return a - b