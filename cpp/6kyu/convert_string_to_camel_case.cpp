/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/517abf86da9663f1d2000003/train/cpp


Instructions:
Complete the method/function so that it converts dash/underscore delimited words into camel casing. The first word within the output should be capitalized only if the original word was capitalized (known as Upper Camel Case, also often referred to as Pascal case). The next words should be always capitalized.

Examples:
"the-stealth-warrior" gets converted to "theStealthWarrior" 
"The_Stealth_Warrior" gets converted to "TheStealthWarrior"
"The_Stealth-Warrior" gets converted to "TheStealthWarrior"

*/

#include <string>
using namespace std;

string to_camel_case(string text)
{
  for(int i = 0; i < text.size(); ++i)
  {
    if(text[i] == '-' || text[i] == '_')
    {
      text.erase(i, 1);
      text[i] = toupper(text[i]);
    }
  }
  
  return text;
}
