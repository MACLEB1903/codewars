/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source: 
https://www.codewars.com/kata/53da3dbb4a5168369a0000fe/train/cpp


Instructions:
Create a function that takes an integer as an argument and returns "Even" for even numbers or "Odd" for odd numbers.

*/

#include <string>
using namespace std;

string even_or_odd(int number) {
  return number % 2 == 0 ? "Even" : "Odd";
}