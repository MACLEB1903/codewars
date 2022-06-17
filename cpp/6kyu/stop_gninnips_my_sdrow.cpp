/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/5264d2b162488dc400000001/train/cpp


Instructions:
Write a function that takes in a string of one or more words, and returns the same string, but with all words that have five or more letters reversed (Just like the name of this Kata). Strings passed in will consist of only letters and spaces. Spaces will be included only when more than one word is present.

Examples:
"Hey fellow warriors"  --> "Hey wollef sroirraw" 
"This is a test        --> "This is a test" 
"This is another test" --> "This is rehtona test"

*/

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

vector<string> split(const string& str, char delim);
string spinWords(const string &str);

string spinWords(const string &str)
{
    string result = "";

    for (string& word : split(str, ' ')) {
        if (word.length() >= 5) {
            word = string(word.rbegin(), word.rend());
        }

        result += word + " ";
    }

    result.pop_back();

    return result;
}

vector<string> split(const string& str, char delim) 
{
    vector<string> strings;
    size_t start;
    size_t end = 0;

    while ((start = str.find_first_not_of(delim, end)) != string::npos) {
        end = str.find(delim, start);
        strings.push_back(str.substr(start, end - start));
    }

    return strings;
}
