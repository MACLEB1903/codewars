"""

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/55a5bfaa756cfede78000026/train/python


Instructions:
Make a function that returns the value multiplied by 50 and increased by 6. If the value entered is a string it should return "Error".

"""

def problem(a):
	try:
		return a * 50 + 6
	except TypeError:
		return "Error"