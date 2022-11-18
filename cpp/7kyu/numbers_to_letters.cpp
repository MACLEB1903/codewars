/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/57ebaa8f7b45ef590c00000c/train/cpp


Instructions:
Given an array of numbers (in string format), you must return a string. The numbers correspond to the letters of the alphabet in reverse order: a=26, z=1 etc. You should also account for '!', '?' and ' ' that are represented by '27', '28' and '29' respectively.

All inputs will be valid.

*/

#include <string>
#include <vector>
using namespace std;

string switcher(const vector<string>& arr){
  string letters = "zyxwvutsrqponmlkjihgfedcba!? ";
  string result;
  
  for (auto c : arr){
    result += letters[stoi(c) - 1];
  }
    
  return result;
}
