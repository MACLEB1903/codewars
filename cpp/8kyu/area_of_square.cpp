/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source: 
https://www.codewars.com/kata/5748838ce2fab90b86001b1a/train/cpp


Instructions:
Complete the function that calculates the area of the red square, when the length of the circular arc A is given as the input. Return the result rounded to two decimals.
Note: use the π value provided in your language (Math::PI, M_PI, math.pi, etc)

*/

#include <cmath>

double square_area(double A) {
  return round(pow(2 * A / M_PI, 2) * 100) / 100;
};
