"""

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/57cff961eca260b71900008f/train/python


Instructions:
Given an array of numbers, check if any of the numbers are the character codes for lower case vowels (a, e, i, o, u).

If they are, change the array value to a string of that vowel.

input [100,100,116,105,117,121]=>[100,100,116,"i","u",121] output
Return the resulting array.

"""

def is_vow(inp):
    return [chr(n) if chr(n) in "aeiou" else n for n in inp]
