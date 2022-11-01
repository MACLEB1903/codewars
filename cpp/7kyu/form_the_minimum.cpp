/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/5ac6932b2f317b96980000ca/train/cpp


Instructions:
Given a list of digits, return the smallest number that could be formed from these digits, using the digits only once (ignore duplicates). Only positive integers in the range of 1 to 9 will be passed to the function.

Example: 
[1, 3, 1] ==> 13
[5, 7, 5, 9, 7] ==> 579
[1, 9, 3, 1, 7, 4, 6, 6, 7]  ==> 134679

*/

#include <vector>
#include <set>
using namespace std; 

unsigned long long minValue (vector <int> values){
  set<int> setValues;
  
  for (auto value : values)
  {
    setValues.insert(value);
  }
  
  string result;

  for (auto const& value : setValues)
  {
      result += to_string(value);
  }
  
  return stol(result);
}
