/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source: 
https://www.codewars.com/kata/57a0885cbb9944e24c00008e/train/cpp


Instructions:
Write function RemoveExclamationMarks which removes all exclamation marks from a given string.

*/

#include <string>
#include <algorithm>

using namespace std;

string removeExclamationMarks(string str) {
    str.erase(remove(str.begin(), str.end(), '!'), str.end());
    return str;
}
