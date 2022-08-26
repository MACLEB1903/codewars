/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source: 
https://www.codewars.com/kata/551b4501ac0447318f0009cd/train/cpp


Instructions:
Implement a function which convert the given boolean value into its string representation.

Note: Only valid inputs will be given.

*/

#include <string>
using namespace std;

string boolean_to_string(bool b){
 return b ? "true" : "false";
}