/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/5552101f47fc5178b1000050/train/javascript


Instructions:
Given two positive integers n and p, we want to find a positive integer k, 
if it exists, such that the sum of the digits of n raised to consecutive powers 
starting from p is equal to k * n.

In other words, writing the consecutive digits of n as a, b, c, d ..., is there an integer k such that:

(a^p + b^(p+1) + c^(p+2) + d^(p+3) + ...) = n * k

If it is the case we will return k, if not return -1.

Note: n and p will always be strictly positive integers.

Examples:
n = 89; p = 1 ---> 1 
Explanation: 8¹ + 9² = 89 = 89 * 1

n = 92; p = 1 ---> -1 
Explanation: There is no k such that 9¹ + 2² equals 92 * k

n = 695; p = 2 ---> 2 
Explanation: 6² + 9³ + 5⁴ = 1390 = 695 * 2

n = 46288; p = 3 ---> 51 
Explanation: 4³ + 6⁴ + 2⁵ + 8⁶ + 8⁷ = 2360688 = 46288 * 51

*/

function digPow(n, p){
  const num = [...n.toString()].reduce((sum, n, i) => sum+=Math.pow(+n, p+i), 0);
  
  for (let i=1; i*n <= num; i++){
    if (i*n ===num){return i}
  }
  return -1; 
}
