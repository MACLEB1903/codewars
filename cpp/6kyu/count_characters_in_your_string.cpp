/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/52efefcbcdf57161d4000091/train/cpp


Instructions:
The main idea is to count all the occurring characters in a string. If you have a string like aba, then the result should be {'a': 2, 'b': 1}.
What if the string is empty? Then the result should be empty object literal, {}.

*/

#include <map>
#include <string>
using namespace std;

map<char, unsigned> count(const string& string) {
  map<char, unsigned> result;
  
  for (const char& letter : string)
  {
    result[letter]++;
  }
  
  return result;
}
