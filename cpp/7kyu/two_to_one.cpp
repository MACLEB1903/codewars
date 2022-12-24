/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/5656b6906de340bd1b0000ac/train/cpp


Instructions:
Take 2 strings s1 and s2 including only letters from a to z.
Return a new sorted string (alphabetical ascending), the longest possible, containing distinct letters - each taken only once - coming from s1 or s2.

Example:
a = "xyaabbbccccdefww"
b = "xxxxyyyyabklmopq"

longest(a, b) -> "abcdefklmopqwxy"
a = "abcdefghijklmnopqrstuvwxyz"
longest(a, a) -> "abcdefghijklmnopqrstuvwxyz"

*/



#include <set>
#include <string>
using namespace std;

namespace TwoToOne {
  string longest(const string& s1, const string& s2){
    set<char> wholeString(s1.begin(), s1.end());
    
    for (char c : s2)
      wholeString.insert(c);
    
    return string(wholeString.begin(), wholeString.end());
  }
}
