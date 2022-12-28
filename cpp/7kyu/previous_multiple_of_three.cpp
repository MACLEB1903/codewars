/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/61123a6f2446320021db987d/train/cpp


Instructions:
Given a positive integer n: 0 < n < 1e6, remove the last digit until you're left with a number that is a multiple of three.

Return n if the input is already a multiple of three, and if no such number exists, return null, a similar empty value, or -1.

Example:
1      => null
25     => null
36     => 36
1244   => 12
952406 => 9

*/

int prev_mult_of_three(int n){
  while (n % 3){ 
    n /= 10;
  }
  
  return n == 0 ? -1 : n;
}
