"""

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/5a34af40e1ce0eb1f5000036/train/python


Instructions:
Create a function that returns the CSV representation of a two-dimensional numeric array.

Example: 
input:
   [[ 0, 1, 2, 3, 4 ],
    [ 10,11,12,13,14 ],
    [ 20,21,22,23,24 ],
    [ 30,31,32,33,34 ]] 
    
output:
     '0,1,2,3,4'
'10,11,12,13,14'
'20,21,22,23,24'
'30,31,32,33,34'
Array's length > 2.

Note: you shouldn't escape the \n, it should work as a new line.

"""


def toCsvText(array):
    return '\n'.join(','.join(map(str, line)) for line in array)