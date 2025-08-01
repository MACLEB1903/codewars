/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/5a262cfb8f27f217f700000b/train/cpp


Instructions:
In this Kata, you will be given two strings a and b and your task will be to return the characters that are not common in the two strings. 

For example:
Haskell
solve("xyab","xzca") = "ybzc" 
-The first string has 'yb' which is not in the second string. 
-The second string has 'zc' which is not in the first string.

Notice also that you return the characters from the first string concatenated with those from the second string.

*/

#include <unordered_set>
using namespace std;

string solve(string a, string b) 
{
  string result;
  
  unordered_set<char> setA(a.begin(), a.end());
  unordered_set<char> setB(b.begin(), b.end());
  
  for(auto c : a){
     if(setB.find(c) == setB.end())
      result.append(1, c);
  }
   
  for(auto c : b){
    if(setA.find(c) == setA.end())
      result.append(1, c);
  }
  
  return result;
}
