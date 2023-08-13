"""

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/635b37978f20011cadcf169b/train/python


Instructions:
Given a random string containing characters of random case

example input: "AbcdEfg"

return the string with alternating case, starting with an uppercase character (furthest left):

example output: "AbCdEfG"

Note: input string will only contain letter characters (no spaces).

"""

def to_alternating_case(string):
	return string.swapcase() 
	
