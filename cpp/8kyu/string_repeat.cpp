/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source: 
https://www.codewars.com/kata/57a0e5c372292dd76d000d7e/train/cpp


Instructions:
Write a function that accepts a non-negative integer n and a string s as parameters, and returns a string of s repeated exactly n times.

Examples (input -> output):
6, "I"     -> "IIIIII"
5, "Hello" -> "HelloHelloHelloHelloHello"

*/

#include <string>
using namespace std;

string repeat_str(size_t repeat, const string& str) {
  string repeat_str;
  for (size_t i = 1; i<=repeat; i++){
    repeat_str += str;
  }
  return repeat_str;
}