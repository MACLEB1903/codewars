"""

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/56a25ba95df27b7743000016/train/python


Instructions:
Basic regex tasks. Write a function that takes in a numeric code of any length. The function should check if the code begins with 1, 2, or 3 and return true if so. Return false otherwise. 

You can assume the input will always be a number.

"""

def validate_code(code):
	return str(code).startswith(("1","2","3"))