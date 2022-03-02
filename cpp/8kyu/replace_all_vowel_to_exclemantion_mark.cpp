/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source: 
https://www.codewars.com/kata/57fb09ef2b5314a8a90001ed/train/cpp

  
Instructions: 
Description:
Replace all vowel to exclamation mark in the sentence. aeiouAEIOU is vowel.

Examples
"Hi!" --> "H!!"
"!Hi! Hi!" --> "!H!! H!!"
"aeiou" --> "!!!!!"
"ABCDE" --> "!BCD!"
  
*/


#include <string>
#include <regex>
using namespace std;

string replace(const string &w){
  return regex_replace(w, regex("[aeiouAEIOU]"), "!");
}
