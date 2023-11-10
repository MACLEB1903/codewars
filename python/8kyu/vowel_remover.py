"""

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/5547929140907378f9000039/train/python


Instructions:
Create a function called shortcut to remove the lowercase vowels (a, e, i, o, u ) in a given string.

Examples:
"hello"     -->  "hll"
"codewars"  -->  "cdwrs"
"goodbye"   -->  "gdby"
"HELLO"     -->  "HELLO"

don't worry about uppercase vowels
y is not considered a vowel for this kata

"""

def shortcut(s):
	for vowel in "aeoiu":
		s = s.replace(vowel,"")
	return s
