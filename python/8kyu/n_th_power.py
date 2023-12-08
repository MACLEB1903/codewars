"""

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/57d814e4950d8489720008db/train/python


Instructions:
Removed due to copyright infringement.

This kata is from check py.checkio.org
You are given an array with positive numbers and a non-negative number N. You should find the N-th power of the element in the array with the index N. If N is outside of the array, then return -1. Don't forget that the first element has the index 0.

"""

def index(array, n):
	try:
		return array[n]
	except:
		return -1