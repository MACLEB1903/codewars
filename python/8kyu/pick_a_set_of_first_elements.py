"""

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/572b77262bedd351e9000076/train/python


Instructions:
Write a function to get the first element(s) of a sequence. Passing a parameter n (default=1) will return the first n element(s) of the sequence. 

If n == 0 return an empty sequence []
arr = ['a', 'b', 'c', 'd', 'e']
first(arr)    # --> ['a']
first(arr, 2) # --> ['a', 'b']
first(arr, 3) # --> ['a', 'b', 'c']
first(arr, 0) # --> []

"""

def first(seq, n=1): 
     return seq[0:n]
     