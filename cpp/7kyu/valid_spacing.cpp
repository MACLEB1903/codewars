/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/5f77d62851f6bc0033616bd8/train/cpp


Instructions:
Task:
Your task is to write a function called valid_spacing() or validSpacing()  which checks if a string has valid spacing. The function should return either true or false (or the corresponding value in each language).  

For this kata, the definition of valid spacing is one space between words, and no leading or trailing spaces. Words can be any consecutive sequence of non space characters. Below are some examples of what the function should return:
'Hello world'   => true
' Hello world'  => false
'Hello world  ' => false
'Hello  world'  => false
'Hello'         => true

Even though there are no spaces, it is still valid because none are needed:
'Helloworld'    => true
'Helloworld '   => false
' '             => false
''              => true
Note: - there will be no punctuation or digits in the input string, only letters.*

*/

#include <string>
using namespace std;

bool valid_spacing(const string& s){
  if (s[0] == ' ' || s[s.size() - 1] == ' ')
  {
    return false;
  }
  else if (s.find("  ") == string::npos)
  {
    return true;
  }
  
  return false;
}
