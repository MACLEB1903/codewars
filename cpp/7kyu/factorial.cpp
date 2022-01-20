/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/54ff0d1f355cfd20e60001fc/train/cpp


Instructions:
In mathematics, the factorial of a non-negative integer n, denoted by n!, is the product of all positive integers less than or equal to n. For example:
5! = 5 \* 4 \* 3 \* 2 \* 1 = 120. By convention the value of 0! is 1.

if-not:factor
Write a function to calculate factorial for a given input. If input is below 0 or above 12 throw an exception of type ArgumentOutOfRangeException (C#) or IllegalArgumentException (Java) or RangeException (PHP) or throw a RangeError (JavaScript) or ValueError (Python) or return -1 (C).

if:factor
Write a word to calculate factorial for a given input. If input is below 0 or above 12 throw an error using the given word range-error.

More details about factorial can be found here.

*/



long long factorial(int n){
  long result = 1;
  
  for (int i = 1; i <= n; ++i){
    result *= i;
  }
  
  return result;
}
