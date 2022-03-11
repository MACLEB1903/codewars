/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source: 
https://www.codewars.com/kata/53dc23c68a0c93699800041d/train/cpp


Instructions:
Write a function that takes an array of words and smashes them together into a sentence and returns the sentence. You can ignore any need to sanitize words or add punctuation, but you should add spaces between each word. Be careful, there shouldn't be a space at the beginning or the end of the sentence!

Example:
['hello', 'world', 'this', 'is', 'great']  =>  'hello world this is great'

Assumptions
You can assume that you are only given words.
You cannot assume the size of the array.
You can assume that you do get an array.
What We're Testing
We're testing basic loops and string manipulation. This is for beginners who are just learning loops and string manipulation.

Disclaimer:
This is for beginners so we want to test basic loops and string manipulation. Advanced users should easily be able to do this in one line.

*/


#include <vector>
#include <string>
#include <numeric>  // for accumulate
using namespace std;

string smash(const vector<string>& words) {
    return accumulate(words.begin(), words.end(), string(),
                      [](const string& a, const string& b) {
                          return a.empty() ? b : a + " " + b;
                      });
}
