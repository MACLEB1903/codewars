"""

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/55dc4520094bbaf50e0000cb/train/python


Instructions:
Wilson primessatisfy the following condition.
Let $P$ represent a prime number. 

Then, math\displaystyle\frac{(P-1)! + 1}{P * P} should give a whole number, where $P!$ is the factorial of $P$.

Your task is to create a function that returns true if the given number is a <b>Wilson prime</b> and false otherwise.

"""

def am_i_wilson(n):
    return n in (5, 13, 563)