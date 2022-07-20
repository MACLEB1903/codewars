/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source: 
https://www.codewars.com/kata/5265326f5fda8eb1160004c8/train/cpp


Instructions:
We need a function that can transform a number (integer) into a string.

What ways of achieving this do you know?

Examples (input --> output):
123  --> "123"
999  --> "999

*/

#include <string>
using namespace std;

string number_to_string(int num) {
 return to_string(num);
}