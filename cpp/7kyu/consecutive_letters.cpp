/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/5ce6728c939bf80029988b57/train/cpp


Instructions:
In this Kata, we will check if a string contains consecutive letters as they appear in the English alphabet and if each letter occurs only once. 

haskell
Rules are: (1) the letters are adjacent in the English alphabet, and (2) each letter occurs only once.

For example: 
solve("abc") = True, because it contains a,b,c
solve("abd") = False, because a, b, d are not consecutive/adjacent in the alphabet, and c is missing.
solve("dabc") = True, because it contains a, b, c, d
solve("abbc") = False, because b does not occur once.
solve("v") = True
All inputs will be lowercase letters. 

More examples in test cases. Good luck!

*/

using namespace std;

bool solve(string s){
  sort(s.begin(), s.end());
  
  for (int i = 0; i < s.size() - 1; i++)
  {
    if (s[i] + 1 != s[i + 1])
      return false;
  }
  
  return true;
}
