"""
Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

https://www.codewars.com/kata/5502c9e7b3216ec63c0001aa/train/python


Instructions:
The Western Suburbs Croquet Club has two categories of membership, Senior and Open. They would like your help with an application form that will tell prospective members which category they will be placed.

To be a senior, a member must be at least 55 years old and have a handicap greater than 7. In this croquet club, handicaps range from -2 to +26; the better the player the lower the handicap.

Input
Input will consist of a list of pairs. Each pair contains information for a single potential member. Information consists of an integer for the person's age and an integer for the person's handicap.

Output
Output will consist of a list of string values (in Haskell and C: Open or Senior) stating whether the respective member is to be placed in the senior or open category.

"""

def open_or_senior(data):
    return [("Open", "Senior")[age>=55 and handicap_range > 7]  for  [age, handicap_range] in data]