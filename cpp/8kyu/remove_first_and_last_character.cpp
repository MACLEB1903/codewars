/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source: 
https://www.codewars.com/kata/56bc28ad5bdaeb48760009b0/train/cpp


Instructions:
Task:
Your goal is to create a function that removes the first and last characters of a string. You're given one parameter, the original string.

Important: Your function should handle strings of any length ≥ 2 characters. For strings with exactly 2 characters, return an empty string.

Examples:
removeChar('eloquent') // -> 'loquen'
removeChar('country')  // -> 'ountr' 
removeChar('person')   // -> 'erso'
removeChar('ab')       // -> '' (empty string)
removeChar('xyz')      // -> 'y'
Function Signature
function removeChar(str) {
  // Your code here
}

Requirements:
The input string will always have at least 2 characters
For strings with exactly 2 characters, return an empty string
For strings with 3 or more characters, remove the first and last character
The function should handle strings containing letters, numbers, and special characters
Test Cases

Your solution will be tested against:
Basic functionality with common words
Edge cases with 2-character and 3-character strings
Strings containing numbers and special characters
Random test cases of varying lengths

*/

#include <string>
using namespace std; 

string sliceString (string str ){
  return str.substr(1, str.size()-2) ; 
}