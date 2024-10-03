/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/57e76bc428d6fbc2d500036d/train/typescript


Instructions:
Write a function to split a string and convert it into an array of words.

Examples (Input?: any = => Output):
"Robin Singh" ==> ["Robin", "Singh"]

"I love arrays they are my favorite" ==> ["I", "love", "arrays", "they", "are", "my", "favorite"]

*/

export function stringToArray(string: string): string[] {
  return string.split(" ")
}
