"""

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/57a386117cb1f31890000039/train/python


Instructions:
Write function parse_float which takes a string/list and returns a number or 'none' if conversion is not possible.

"""

def parse_float(string):
    try:
        return float(string)
    except:
        return None
