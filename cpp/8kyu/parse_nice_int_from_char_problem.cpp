/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source: 
https://www.codewars.com/kata/57a386117cb1f31890000039/train/cpp

    
Instructions: 
You ask a small girl,"How old are you?" She always says, "x years old", where x is a random number between 0 and 9.
Write a program that returns the girl's age (0-9) as an integer.
Assume the test input string is always a valid string. For example, the test input may be "1 year old" or "5 years old". The first character in the string is always a number.
    
*/

#include <string>
using namespace std;

int get_age(const string& she_said) {
  char char_number = she_said[0];
  return char_number - '0';
}
