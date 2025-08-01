/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/58a5aeb893b79949eb0000f1/train/cpp


Instructions:
Complete the method that returns true if 2 integers share at least two 1 bits, otherwise return false. For simplicity assume that all numbers are non-negative.

Example:
7  =  0111 in binary
10  =  1010
15  =  1111
7 and 10 share only a single 1-bit (at index 2) --> false
7 and 15 share 3 1-bits (at indexes 1, 2, and 3) --> true
10 and 15 share 2 1-bits (at indexes 0 and 2) --> true

Hint: you can do this with just string manipulation, but binary operators will make your life much easier.

*/

#include <bitset>
using namespace std;

bool shared_bits(long a, long b){
  bitset<32> bits = a & b;
  return bits.count() >= 2;
}
