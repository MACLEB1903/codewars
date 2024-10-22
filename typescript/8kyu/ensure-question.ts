/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/5866fc43395d9138a7000006/train/typescript


Instructions:
Given a string, write a function that returns the string with a question mark ("?") appends to the end, unless the original string ends with a question mark, in which case, returns the original string.

For example (Input --> Output):
"Yes" --> "Yes?" 
"No?" --> "No?"

*/

function ensureQuestion(s: string): string {
  return /\?$/.test(s) ? s : s + "?";
}
