/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/5bc052f93f43de7054000188/train/cpp


Instructions:
You will be given two strings a and b consisting of lower case letters, but a will have at most one asterix character. The asterix (if any) can be replaced with an arbitrary sequence (possibly empty) of lowercase letters. No other character of string a can be replaced. If it is possible to replace the asterix in a to obtain string b, then string b matches the pattern. 

If the string matches, return true else false. 

For example:
solve("code*s","codewars") = true, because we can replace the asterix(*) with "war" to match the second string. 
solve("codewar*s","codewars") = true, because we can replace the asterix(*) with "" to match the second string. 
solve("codewars","codewars") = true, because the strings already match.
solve("a","b") = false
solve("*", "codewars") = true
More examples in test cases. 

Good luck!

*/

#include <string>
#include <fnmatch.h>
using namespace std;

bool solve(const string& a, const string& b){ 
  return fnmatch(a.c_str(), b.c_str(), 0) == 0;
}
