"""

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/563e320cee5dddcf77000158/train/python


Instructions:
It's the academic year's end, fateful moment of your school report.
The averages must be calculated. All the students come to you and entreat you to calculate their average for them.
Easy ! You just need to write a script.

Return the average of the given array rounded down to its nearest integer.

The array will never be empty.

"""

def get_average(marks):
	return sum(marks) // len(marks)
