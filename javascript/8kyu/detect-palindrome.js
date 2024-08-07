/*

Description:
Given an input string determine whether or not it is a Palindrome (e.g. "racecar") by returning a boolean response. A true\1 response indicates the input is a valid Palindrome.

Ignore whitespace, special characters, and case.

*/

function isPalindrome(str) {
  return str.toLowerCase() === str.toLowerCase().split("").reverse().join("");
}
