/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/54ff3102c1bad923760001f3/train/cpp


Instructions:
Return the number (count) of vowels in the given string. 
We will consider a, e, i, o, u as vowels for this Kata (but not y).
The input string will only consist of lower case letters and/or spaces.

*/

#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int getCount(const string& inputStr){
  int num_vowels = 0;
  
  vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
  
  for (int i = 0; i < inputStr.length(); i++){
    if (find(vowels.begin(), vowels.end(), inputStr[i]) != vowels.end() ){
      num_vowels++;
    }
  }
  
  return num_vowels;
}#include <string>

int getCount(const string& str){
   return count_if(
     str.begin(), str.end(), [](int i){
      return i == 'a' || i == 'e' || i == 'i' || i == 'o'|| i == 'u';
    }
   );
}
