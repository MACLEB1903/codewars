"""

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/57356c55867b9b7a60000bd7/train/python


Instructions:
Your task is to create a function that does four basic mathematical operations.
The function should take three arguments - operation(string/char), value1(number), value2(number).  
The function should return result of numbers after applying the chosen operation.
Examples(Operator, value1, value2) --> output

"""

def basic_op(operator, value1, value2):
    if operator == "+":
        return value1 + value2
    elif operator == "-":
        return value1 - value2
    elif operator == "*":
        return value1 * value2
    elif operator == "/":
        return value1 / value2
