/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/55b051fac50a3292a9000025/train/cpp


Instructions:
Filter the number
Oh, no! The number has been mixed up with the text. Your goal is to retrieve the number from the text, can you return the number back to its original state?

Task:
Your task is to return a number from a string.

Details:
You will be given a string of numbers and letters mixed up, you have to return all the numbers in that string in the order they occur.

*/

#include <string>

long long filter_string(const string &value){
    long long result = 0;
  
    for(char c : value){
        if(!isdigit(c)) continue;
      
        result = result * 10 + c - '0';
    }
  
    return result;
}#include <string>
#include <regex>
using namespace std;
long long filter_string(const string &value){
  regex r("[^0-9]+");
  
  string ans = regex_replace(value, r, "");
  
  return stoll(ans);
}
