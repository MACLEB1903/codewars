/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/57eae65a4321032ce000002d/train/javascript


Instructions:
Given a string of digits, you should replace any digit below 5 with '0' and any digit 5 and above with '1'. Return the resulting string.

Note: input will never be an empty string

*/

function fakeBin(x) {
  return [...x].map((n) => (n >= 5 ? 1 : 0)).join("");
}
