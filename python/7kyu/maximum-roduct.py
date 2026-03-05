"""

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/5a4138acf28b82aa43000117/solutions/python


Instructions:
Given an array of integers , Find the maximum product obtained from multiplying 2 adjacent numbers in the array. Note that the array size is at least 2 and consists a mixture of positive, negative integers and also zeroes.

"""

def adjacent_element_product(array):
    products = []
    
    for i, x in enumerate(array):
        if (i == len(array)-1):
            break
        else:
            products.append(x*array[i+1])
            
    return max(products)

def adjacent_element_product(array):
    return max(array[i]*array[i+1] for i in range(len(array)-1))