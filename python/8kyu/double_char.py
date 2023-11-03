"""

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/56b1f01c247c01db92000076/train/python


Instructions:
Given a string, you have to return a string in which each character (case-sensitive) is repeated once.

Examples (Input -> Output):
"String"      -> "SSttrriinngg"
"Hello World" -> "HHeelllloo  WWoorrlldd"
"1234!_ "     -> "11223344!!__  "

Good Luck!

"""

def double_char(s):
	return "".join(x*2 for x in s)