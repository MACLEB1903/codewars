"""

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source: 
https://www.codewars.com/kata/525f50e3b73515a6db000b83/train/python


Instructions:
Write a function that accepts an array of 10 integers (between 0 and 9), that returns a string of those numbers in the form of a phone number.

Example:
createPhoneNumber([1, 2, 3, 4, 5, 6, 7, 8, 9, 0]) // => returns "(123) 456-7890"

"""

def create_phone_number(n):
	return "({}{}{}) {}{}{}-{}{}{}{}".format(*n)