/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source: 
https://www.codewars.com/kata/57eae65a4321032ce000002d/train/cpp


Instructions:
Given a string of digits, you should replace any digit below 5 with '0' and any digit 5 and above with '1'. Return the resulting string.
Note: input will never be an empty string

*/

#include <string>
using namespace std;

string fakeBin(string str) {
    for (char& c : str) {
        c = (c < '5') ? '0' : '1';
    }
    return str;
}
