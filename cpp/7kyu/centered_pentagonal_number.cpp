/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/5fb856190d5230001d48d721/train/cpp


Instructions:
Centered pentagonal number
Complete the function that takes an integer and calculates how many dots exist in a pentagonal shape around the center dot on the Nth iteration.
In the image below you can see the first iteration is only a single dot. On the second, there are 6 dots. On the third, there are 16 dots, and on the fourth there are 31 dots.
The sequence is: 1, 6, 16, 31...

If the input is equal to or less than 0, return -1
Example:

1  -->    1
2  -->    6
8  -->  141
0  -->   -1

if:python,ruby
Note:
Input can reach 1020

if:cpp
Note:
In the tests cases n can reach 1358187913

if:c
Note:

Input numbers can reach 1920767766; watch out for integer overflow (it is guaranteeed that the result will fit in a long long).

*/

long pentagonal(long n){
  if (n < 1) return -1;
  return (5 * n * n - 5 * n + 2) / 2;
}
