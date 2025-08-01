/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source: 
https://www.codewars.com/kata/544675c6f971f7399a000e79/train/cpp


Instructions:
Note: This kata is inspired by Convert a Number to a String!. Try that one too.

Description:
We need a function that can transform a string into a number. What ways of achieving this do you know?

Note: Don't worry, all inputs will be strings, and every string is a perfectly valid representation of an integral number.

Examples:
"1234" --> 1234
"605"  --> 605
"1405" --> 1405
"-7" --> -7

*/

#include <string>
using namespace std;

int string_to_number(const string& s) {
  return stoi(s);
}