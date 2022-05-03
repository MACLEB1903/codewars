/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source: 
https://www.codewars.com/kata/57126304cdbf63c6770012bd/train/cpp


Instructions:
Given a string s, write a method (function) that will return true if its a valid single integer or floating number or false if its not.

Valid examples, should return true:

isDigit("3")
isDigit("  3  ")
isDigit("-3.23")
should return false:

isDigit("3-4")
isDigit("  3   5")
isDigit("3 5")
isDigit("zero")
*/

#include <string>
#include <cctype>
#include <stdexcept>

using namespace std;

bool is_digit(string s) {
    size_t start = s.find_first_not_of(' ');
    size_t end = s.find_last_not_of(' ');
    if (start == string::npos)
        return false;
    s = s.substr(start, end - start + 1);

    try {
        size_t idx;
        stod(s, &idx);
        return idx == s.size();
    } catch (...) {
        return false;
    }
}

