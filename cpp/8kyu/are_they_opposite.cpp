/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source: 
https://www.codewars.com/kata/574b1916a3ebd6e4fa0012e7/train/cpp


Instructions:
Task
Give you two strings: s1 and s2. If they are opposite, return true; otherwise, return false. Note: The result should be a boolean value, instead of a string.

The opposite means: All letters of the two strings are the same, but the case is opposite. you can assume that the string only contains letters or it's a empty string. Also take note of the edge case - if both strings are empty then you should return false/False.

Examples (input -> output):
"ab","AB"     -> true
"aB","Ab"     -> true
"aBcd","AbCD" 

*/

#include <string>
#include <cctype>

using namespace std;

bool isOpposite(const string& s1, const string& s2) {
    if (s1.empty() || s2.empty() || s1.size() != s2.size()) return false;

    for (size_t i = 0; i < s1.size(); ++i) {
        if (tolower(s1[i]) != tolower(s2[i]) || s1[i] == s2[i])
            return false;
    }

    return true;
}
