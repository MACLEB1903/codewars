"""

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/570e8ec4127ad143660001fd/train/python


Instructions:
You can print your name on a billboard ad. Find out how much it will cost you. Each character has a default price of £30, but that can be different if you are given 2 parameters instead of 1 (always 2 for Java).

You can not use multiplier "*" operator.

If your name would be Jeong-Ho Aristotelis, ad would cost £600.
20 letters * 30 = 600 (Space counts as a character).

"""

def billboard(name, price=30):
	return sum(price for letter in name)
