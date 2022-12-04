/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/59859f435f5d18ede7000050/train/cpp


Instructions:
Write a function that takes a string and returns an array containing binary numbers equivalent to the ASCII codes of the characters of the string. The binary strings should be eight digits long.
Example:: 'man' should return [ '01101101', '01100001', '01101110' ]

*/

#include <vector>
#include <string>
#include <bitset>
using namespace std;

vector<string> word_to_bin(string word){
  vector<string> result;
  
  for (const char& c : word)
  {
      result.push_back(bitset<8>(c).to_string());
  }
  
  return result;
}
