/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source: 
https://www.codewars.com/kata/57e76bc428d6fbc2d500036d/train/cpp


Instructions:
Write a function to split a string and convert it into an array of words.

Examples (Input ==> Output):
"Robin Singh" ==> ["Robin", "Singh"]
"I love arrays they are my favorite" ==> ["I", "love", "arrays", "they", "are", "my", "favorite"]

*/

#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<string> string_to_array(const string& str) {
    vector<string> words;
    istringstream iss(str);
    string word;

    while (iss >> word) {
        words.push_back(word);
    }

    return words;
}
