"""

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source: 
https://www.codewars.com/kata/5626b561280a42ecc50000d1/train/python


Instructions:
We need a function to collect these numbers, that may receive two integers 
a, b that defines the range [a,b] (inclusive) and outputs a list of the sorted numbers in the range that fulfills the property described above.
[a,b] (inclusive) and outputs a list of the sorted numbers in the range that fulfills the property described above.

Examples:
Let's see some cases (input -> output):
1, 10  --> [1, 2, 3, 4, 5, 6, 7, 8, 9]
1, 100 --> [1, 2, 3, 4, 5, 6, 7, 8, 9, 89]
90, 100 --> []

"""

def sum_dig_pow(a, b):  # range(a, b + 1) will be studied by the function
    result = []

    for num in range(a, b + 1):
        total = sum(int(digit) ** (index + 1) for index, digit in enumerate(str(num)))
        if total == num:
            result.append(num)

    return result
