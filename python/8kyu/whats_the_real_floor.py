"""

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/574b3b1599d8f897470018f6/train/python


Instructions:
Americans are odd people: in their buildings, the first floor is actually the ground floor and there is no 13th floor (due to superstition).
Write a function that given a floor in the american system returns the floor in the european system.
With the 1st floor being replaced by the ground floor and the 13th floor being removed, the numbers move down to take their place. In case of above 13, they move down by two because there are two omitted numbers below them.
Basements (negatives) stay the same as the universal level.

More information here:
https://en.wikipedia.org/wiki/Floor_and_ceiling_functions

Examples:
1  =>  0 
0  =>  0
5  =>  4
15  =>  13
3  =>  -3

"""

def get_real_floor(n):
    if n <= 0: return n
    if n < 13: return n-1
    if n > 13: return n-2
