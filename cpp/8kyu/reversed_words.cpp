/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source: 
https://www.codewars.com/kata/51c8991dee245d7ddf00000e/train/cpp


Instructions:
Description:
Complete the solution so that it reverses all of the words within the string passed in.

Words are separated by exactly one space and there are no leading or trailing spaces.

Example(Input --> Output):

"The greatest victory is that which requires no battle" --> "battle no requires which that is victory greatest The"

*/

#include <string>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

string reverse_words(const string& str) {
    istringstream iss(str);
    vector<string> words;
    string word;

    while (iss >> word) {
        words.push_back(word);
    }

    reverse(words.begin(), words.end());

    ostringstream oss;
    for (size_t i = 0; i < words.size(); ++i) {
        if (i > 0) oss << " ";
        oss << words[i];
    }

    return oss.str();
}
