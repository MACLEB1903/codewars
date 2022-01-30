/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/59cfc09a86a6fdf6df0000f1/train/cpp


Instructions:
Given a string of lowercase letters and an array of integer indices, capitalize all letters at the given indices. If an index is beyond the string, it should be ignored.

Example:
javascript
"abcdef", [1,2,5]     ==> "aBCdeF"
"abcdef", [1,2,5,100] ==> "aBCdeF" // There is no index 100.

Good luck!

*/

using namespace std;

string capitalize(string s, vector<int> idxs){
  for (auto id : idxs)
  {
    s[id] = toupper(s[id]);
  }
  
  return s;
}
