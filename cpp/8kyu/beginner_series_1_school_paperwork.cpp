/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source: 
https://www.codewars.com/kata/55f9b48403f6b87a7c0000bd/train/cpp


Instructions:

Your task is to calculate how many blank pages do you need. If n < 0 or m < 0 return 0.

Example:
n= 5, m=5: 25
n=-5, m=5:  0

Waiting for translations and Feedback! Thanks!

*/

int paperwork(int n, int m) {
  if (n < 0 || m < 0)
    return 0;
  
  return n * m;
}
