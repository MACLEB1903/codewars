"""

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/57a1fd2ce298a731b20006a4/train/python


Instructions:
Write a function that checks if a given string (case insensitive) is a palindrome. 

A palindrome is a word, number, phrase, or other sequence of symbols that reads the same backwards as forwards, such as madam or racecar.

"""

def is_palindrome(s):
    s = s.lower()
    return s == s[::-1]
    