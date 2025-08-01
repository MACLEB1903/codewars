"""

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/58ca658cc0d6401f2700045f/train/python


Instructions:
In this simple exercise, you will write a function that takes two integers; n and limit; and returns a list of the multiples of n up to and possibly including limit.
It is guaranteed that n > 0 and limit >= n.

For example, if the parameters passed are (2, 6), the function should return [2, 4, 6] as 2, 4, and 6 are the multiples of 2 up to 6.

Examples:
n = 2; limit = 6 --> [2, 4, 6]
n = 2; limit = 5 --> [2, 4]

"""

def find_multiples(integer,limit):
	return list(range(integer, limit + 1, integer))
