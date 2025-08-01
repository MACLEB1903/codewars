/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source: 
https://www.codewars.com/kata/5f9f43328a6bff002fa29eb8/train/cpp

Instructions: 
Introduction
floats have limited precision and are unable to exactly represent some values. Rounding errors accumulate with repeated computation, and numbers expected to be equal often differ slightly.

As a result, it is common advice to not use an exact equality comparison (==) with floats.

a, b, c = 1e-9, 1e-9, 3.33e7;
(a + b) + c == a + (b + c);
--> false
0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 == 1.0;
--> false

The solution is to check if a computed value is close to an expected value, without requiring them to be exactly equal. It seems very easy, but many katas test float results the wrong way.


Task:
You have:
a float value that comes from a computation and may have accumulated errors up to ±0.001
a reference value
a function approx_equals that compare the two values taking into account loss of precision; the function should return true if and only if the two values are close to each other, the maximum allowed difference is 0.001

The function is bugged and sometimes returns wrong results.
Your task is to correct the bug.

Note:
This kata uses fixed tolerance for simplicity reasons, but usually relative tolerance is better. Fixed tolerance is useful for comparisons near zero or

*/

#include <cmath>
using namespace std;

bool approx_equals(double a, double b) {
  return abs(a - b) < 0.001;
}
