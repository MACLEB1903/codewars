/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/57cebe1dc6fdc20c57000ac9/train/cpp


Instructions:
Simple, given a string of words, return the length of the shortest word(s).
String will never be empty and you do not need to account for different data types.

*/

#include <string>
using namespace std;
int find_short(string str){
    istringstream inp(str);
    string s;
  
    int min = -1;
  
    while (getline(inp, s, ' '))
        if (s.length() < min)
            min = s.length();
  
    return min;
}
