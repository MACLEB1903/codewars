/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/5aff237c578a14752d0035ae/train/cpp


Instructions:
My grandfather always predicted how old people would get, and right before he passed away he revealed his secret!

In honor of my grandfather's memory we will write a function using his formula!
Take a list of ages when each of your great-grandparent died.  
Multiply each number by itself.  
Add them all together.  
Take the square root of the result.  
Divide by two.

Example:
javascript
predictAge(65, 60, 75, 55, 60, 63, 64, 45) === 86

R
predict_age(65, 60, 75, 55, 60, 63, 64, 45) == 86

python
predict_age(65, 60, 75, 55, 60, 63, 64, 45) == 86

ruby
predict_age(65, 60, 75, 55, 60, 63, 64, 45) == 86

crystal
predict_age(65, 60, 75, 55, 60, 63, 64, 45) == 86

c++
predictAge(65, 60, 75, 55, 60, 63, 64, 45) == 86

php
predictAge(65, 60, 75, 55, 60, 63, 64, 45) == 86

predictAge(65, 60, 75, 55, 60, 63, 64, 45) == 86

lua
Predicter.predictAge(65, 60, 75, 55, 60, 63, 64, 45) == 86

Note: the result should be rounded down to the nearest integer.
Some random tests might fail due to a bug in the JavaScript implementation. Simply resubmit if that happens to you.

*/

#include <math.h>
int predictAge(int age1, int age2, int age3, int age4, int age5, int age6, int age7, int age8){
  return sqrt(
          age1 * age1 + 
          age2 * age2 + 
          age3 * age3 + 
          age4 * age4 + 
          age5 * age5 + 
          age6 * age6 + 
          age7 * age7 + 
          age8 * age8) / 2;
}
