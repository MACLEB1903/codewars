"""

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/559ac78160f0be07c200005a/train/python


Instructions:
Write a function that returns a string in which firstname is swapped with last name.

Example(Input --> Output):
"john McClane" --> "McClane john"

"""

def name_shuffler(str_):
	return " ".join(str_.split(" ")[::-1])
