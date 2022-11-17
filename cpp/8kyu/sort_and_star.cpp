/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source: 
https://www.codewars.com/kata/57cfdf34902f6ba3d300001e/train/cpp


Instructions:
You will be given a list of strings. You must sort it alphabetically (case-sensitive, and based on the ASCII values of the chars) and then return the first value.
The returned value must be a string, and have "***" between each of its letters.

*/

#include <vector>
#include <string>
#include <algorithm>

using namespace std;

string twoSort(vector<string> s) {
    sort(s.begin(), s.end());
    string res;
    for (char c : s[0]) {
        if (!res.empty()) res += "***";
        res += c;
    }
    return res;
}
