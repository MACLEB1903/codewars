/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source: 
https://www.codewars.com/kata/55f9bca8db000bd66ea000e1/train/cpp


Instructions:
Clock shows h hours, m minutes and s seconds after midnight.

Your task is to write a function which returns the time since midnight in milliseconds.

Example:
h = 0
m = 1
s = 1

result = 61000

Input constraints:
0 <= h <= 23
0 <= m <= 59
0 <= s <= 59

*/

int past(int h, int m, int s) {
  return (h * 3600 + m * 60 + s) * 1000;
}
