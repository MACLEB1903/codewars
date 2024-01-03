"""

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/53da6d8d112bd1a0dc00008b/train/python


Instructions:
In this kata you will create a function that takes in a list and returns a list with the reverse order.

Examples (Input -> Output):
[1, 2, 3, 4]  -> [4, 3, 2, 1]
[9, 2, 0, 7]  -> [7, 0, 2, 9]

"""

def reverse_list(l):
	return list(reversed(l))
print(reverse_list([1,2,3,4]))