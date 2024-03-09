/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/555c05c84f8bb1f7680000b2/train/javascript


Instructions:
Given an input string determine whether or not it is a Palindrome (e.g. "racecar") by returning a boolean response. A true\1 response indicates the input is a valid Palindrome.

Ignore whitespace, special characters, and case.

*/

function isPalindrome(str) {
  return str.toLowerCase() === str.toLowerCase().split("").reverse().join("");
}
