/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/5697fb83f41965761f000052/train/cpp


Instructions:
Write a function that takes a string and an an integer n as parameters and returns a list of all words that are longer than n.

Example::
With input "The quick brown fox jumps over the lazy dog", 4
Return ['quick', 'brown', 'jumps']

*/

#include <vector>
#include <string>
using namespace std;

vector<string> filter_long_words(const string& sentence, int n){
  vector<string> result;
  
  istringstream sentenceStream(sentence);
  string word;
  while (getline(sentenceStream, word, ' '))
  {
    if (word.length() > n)
      result.push_back(word);
  }
  
  return result;
}
