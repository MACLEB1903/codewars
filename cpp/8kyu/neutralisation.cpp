/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source: 
https://www.codewars.com/kata/65128732b5aff40032a3d8f0/train/cpp


Instructions:
Worked Example:
("+-+", "+--") ➞ "+-0"
# Compare the first characters of each string, then the next in turn.
# "+" against a "+" returns another "+".
# "-" against a "-" returns another "-".
# "+" against a "-" returns "0".
# Return the string of characters.

Examples:
("--++--", "++--++") ➞ "000000"

("-+-+-+", "-+-+-+") ➞ "-+-+-+"

("-++-", "-+-+") ➞ "-+00"

Notes:
The two strings will be the same length.

*/

#include <string>
#include <iostream>

using namespace std;

string neutralise(const string& str1, const string& str2) {
    string result;

    for (size_t i = 0; i < str1.size(); ++i) {
        if (str1[i] == str2[i]) {
            result += str1[i];  
        } else {
            result += '0'; 
        }
    }

    return result;
}
