"""

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/56170e844da7c6f647000063/train/python


Instructions:
Kids drink toddy.
Teens drink coke.
Young adults drink beer.
Adults drink whisky.

Make a function that receive age, and return what they drink.

Rules:
Children under 14 old.
Teens under 18 old.
Young under 21 old.
Adults have 21 or more.

Examples: (Input --> Output)
13 --> "drink toddy"
17 --> "drink coke"
18 --> "drink beer"
20 --> "drink beer"
30 --> "drink whisky"

"""

def people_with_age_drink(age):
    if age > 20: return 'drink whisky'
    if age > 17: return 'drink beer'
    if age > 13: return 'drink coke'
    return 'drink toddy'