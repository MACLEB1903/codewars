/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source: 
https://www.codewars.com/kata/5168bb5dfe9a00b126000018/train/cpp


Instructions:
Complete the solution so that it reverses the string passed into it.

'world'  =>  'dlrow'
'word'   =>  'drow'

*/

#include <bits/stdc++.h>
#include <string>
using namespace std;

string reverseString(const string &str){
 string str_copy = str;
 reverse(str_copy.begin(), str_copy.end());
  return str_copy;
}
