/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source: 
https://www.codewars.com/kata/56a25ba95df27b7743000016/train/cpp


Instructions:
Write a function that checks if a given string (case insensitive) is a palindrome.

A palindrome is a word, number, phrase, or other sequence of symbols that reads the same backwards as forwards, such as madam or racecar.

*/

#include <string>
using namespace std;

bool isPalindrom(const string& str) {
  string reversedStr = str;
  for (char& c : reversedStr) c = toupper(c);
  return reversedStr == string(reversedStr.rbegin(), reversedStr.rend());
}