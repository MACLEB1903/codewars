"""

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/5e2456b1c4d2810023bb14e2/train/python


Instructions:
You and your friends are about to order pizzas. The pizzeria has two pizzas in their menu. The first one has diameter d1 and price price1 and the second diameter d2 and price price2. Return the diameter of the pizza which has the most value for money.

If the value for money of the two pizzas are equal return the second diameter.

"""

def which_pizza(d1,price1,d2,price2):
	if d12 / price1 > d22 / price2:
		return d1
	return d2
