"""

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/572b6b2772a38bc1e700007a/train/python


Instructions:
You'll be given a string, and have to return the sum of all characters as an int. The function should be able to handle all printable ASCII characters.

Examples:
uniTotal("a") == 97
uniTotal("aaa") == 291

"""

def uni_total(string):
	return sum(map(ord,string))
