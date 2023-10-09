"""

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/554003323fd6af1c4200004e/train/python


Instructions:
Create a function that checks if a number is odd.
Expect negative and decimal numbers too. Remember... all negative numbers can also be either odd or even.
Decimal numbers always return false 

Example:
is_odd(2)--> false
is_odd(5)--> true
is_odd(4)--> false
is_odd(-17)--> true
is_odd(-7.0)--> true
is_odd(-7.1)--> false
is_odd(4.23)--> false
is_odd(5.0)--> true
is_odd(5.23)--> false

"""

def is_odd(n):
    return n % 2 == 1 