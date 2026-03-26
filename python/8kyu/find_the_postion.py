"""

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/5808e2006b65bff35500008f/train/python


Instructions:
When provided with a letter, return its position in the alphabet.
Input :: "a"
Output :: "Position of alphabet: 1"

Note: Only lowercased English letters are tested

"""

def position(letter):
    return f"Position of alphabet: {ord(letter) - 96}"