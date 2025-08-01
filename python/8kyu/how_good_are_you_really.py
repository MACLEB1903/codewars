"""

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/5601409514fc93442500010b/train/python


Instructions:
There was a test in your class and you passed it. Congratulations!
But you're an ambitious person. You want to know if you're better than the average student in your class.
You receive an array with your peers' test scores. Now calculate the average and compare your score!

Note:
Your points are not included in the array of your class's points. Do not forget them when calculating the average score!

"""

def better_than_average(class_points, your_points):
	return sum(class_points, your_points) / (len(class_points) + 1) < your_points